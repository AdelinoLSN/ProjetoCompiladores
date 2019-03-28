%{
#include <stdio.h>
#include "tabela.h"
#include "tabela.c"
#include "arvore.h"
#include "arvore.c"
#include "codigo_intermediario.h"
#include "codigo_intermediario.c"
#include "tabela_funcoes.h"
#include "tabela_funcoes.c"


int yylex(void);
void yyerror(char *);

pilha_contexto *pilha;
tabela_func* funcs;

%}

%union
{
    int dval;
    float fval;
}

%token TYPE INT FLOAT GT LT GE LE EQ NE
%token FUNC ID MAIN
%token VAR IF ELSE FOR
%token INTEIRO REAL
%token AND OR NOT
%token PRINT SCANF
%token EXPR ATTR COND LOOP IO STMT STMTS DECL FUNC_CALL RETURN
%left '+' '-'
%left '*' '/' '%'
%%

program:
	program functions main {
		print_funcoes(funcs);
		printf("\n---------------\nPrograma executado\n---------------\n\n");
		gerar_codigo_completo((no_arvore*) $<dval>2);
		gerar_codigo_completo((no_arvore*) $<dval>3);
		printf("\n");
	}
	|
	;

functions:
	functions function {
		no_arvore* no = criar_no_funcs($<dval>1, $<dval>2);
		$<dval>$ = (int) no;
	}
	| {$<dval>$ = 0;}
	;

function:
	FUNC ID '(' {
		tabela* contexto = criar_contexto(topo_pilha(pilha));
		pilha = empilhar_contexto(pilha,contexto);
	}
	 parameter_list ')' TYPE blocoFunc {
	 	no_arvore* no = $<dval>8;
	 	no_arvore* retorno = no->dado.stmts->stmt;
	 	//printf("3 - bloco: %d,tipo: %d , expr %d\n",(int) no,retorno->tipo,(int) retorno);
	 	//exit(0);
	 	no_arvore* bloco = $<dval>8;
	 	//t_expr* retorno = bloco->dado.stmts->stmt;

	 	printf("%d %d\n",retorno->dado.expr->tipo, $<dval>7);
	 	if(retorno->dado.expr->tipo != $<dval>7){
	 		yyerror("Tipos de retorno e valor retornado são diferentes");
	 		exit(0);
	 	}

	 	retorno->dado.expr->tipo = RETURN;

		if(buscar_function(funcs, $<dval>2) != NULL){
			yyerror("Funcao ja declarada!");
			exit(0);
		}
		no_func* func = criar_no_func($<dval>2, $<dval>7, $<dval>5, bloco);
		funcs = (tabela_func*) inserir_funcao(funcs,func);
		$<dval>$ = (int) func;
	}
	;

parameter_list:
	parameter_list_not_void {
		//printf("TUDO BOM, QUERIDA?\n");
	}
	| {$<dval>$ = 0;}
	;

parameter_list_not_void:
	parameter
	| parameter_list_not_void ',' parameter {
		param* params = $<dval>1;
		param* aux = params;
		while(aux->prox!=NULL){
			aux=aux->prox;
		}
		aux->prox = $<dval>3;
		$<dval>$ = (int) params;
	}
	;

parameter:
	ID TYPE {
		param* params = NULL;
		params = inserir_params(params,$<dval>1,$<dval>2);
		simbolo* s =localizar_simbolo(topo_pilha(pilha), (char*) $<dval>1);
		if(s!=NULL){
			yyerror("Nome de parâmetros duplicado");
			exit(0);
		}
		else{
			simbolo* s = criar_simbolo((char*) $<dval>1, $<dval>2);
			inserir_simbolo(topo_pilha(pilha),s);
		}
		$<dval>$ = (int) params;
	}
	;

blocoFunc:
	'{' stmts retorno '}' {
		no_arvore* no = criar_no_stmts($<dval>2, $<dval>3);
		t_expr* expr = $<dval>3;
		printf("2 - exp: %d, tipo: %d, bloco %d\n",(int) expr,((no_arvore*)$<dval>3)->tipo,(int) no);


		desempilhar_contexto(&pilha);
		$<dval>$ = (int) no;
	}
	;

retorno:
	RETURN expr ';' {
		printf("1 - expr: %d\n",$<dval>2);
		$<dval>$ = $<dval>2;
	}

bloco:
	'{' {
		tabela* contexto = criar_contexto(topo_pilha(pilha));
		pilha = empilhar_contexto(pilha,contexto);
	}
	stmts '}' {
		//imprimir_contexto(topo_pilha(pilha));
		desempilhar_contexto(&pilha);
		$<dval>$ = (int) $<dval>3;
	}
	;

main:
	FUNC MAIN '(' ')' bloco {
		no_arvore* no = criar_no_main($<dval>5);
		$<dval>$ = (int) no;
	}
	;

stmts:
	stmts stmt {
		no_arvore* no = criar_no_stmts($<dval>1, $<dval>2);
		$<dval>$ = (int) no;
	}
	|	{ $<dval>$ = 0;}
	;

stmt:
	decl
	| declnattr
	| expr
	| bloco
	| attr
	| cond
	| loop
	| ioop
	;

decl:
	VAR ID TYPE ';' {
		simbolo* s =localizar_simbolo(topo_pilha(pilha), (char*) $<dval>2);
		if(s!=NULL){
			yyerror("Variável já declarada");
			exit(0);
		}
		else{
			simbolo* s = criar_simbolo((char*) $<dval>2, $<dval>3);
			inserir_simbolo(topo_pilha(pilha),s);
			no_arvore* no = criar_no_decl($<dval>2, $<dval>3);
			$<dval>$ = (int) no;
		}
	}
	| VAR ID '[' INTEIRO ']' TYPE ';' {
		simbolo* s =localizar_simbolo(topo_pilha(pilha), (char*) $<dval>2);
		if(s!=NULL){
			yyerror("Variável já declarada");
			exit(0);
		}
		else{
			simbolo* s = criar_simbolo((char*) $<dval>2, $<dval>3);
			s->val.dval = $<dval>4;
			inserir_simbolo(topo_pilha(pilha),s);
			no_arvore* no = criar_no_decl((char*) $<dval>2, $<dval>3);
			$<dval>$ = (int) no;
		}
	}
	;

declnattr:
	VAR ID TYPE '=' expr ';' {
		simbolo* s = criar_simbolo((char*) $<dval>2, $<dval>3);
		no_arvore* no = criar_no_atribuicao(s, (void*) $<dval>5);
		no_arvore* no_expr = (no_arvore*) $<dval>5;

		int tipo_atual = no_expr->dado.expr->tipo;

		if (tipo_atual > s->tipo){
			yyerror("Tipos incompatíveis.");
			exit(0);
		}else{
			inserir_simbolo(topo_pilha(pilha),s);
			$<dval>$ = (int) no;
		}
	}
	;

variables:
	ID
	;

function_call:
	ID '(' argument_list ')' ';' {
		no_func* func = buscar_function(funcs,$<dval>1);
		if(func == NULL){
			yyerror("Função chamada não existe!\n");
			exit(0);
		}
		arg* args = $<dval>3;
		param* params = func->params;
		int len_args = count_args(args);
		int len_params = count_params(params);
		if(len_args != len_params){
			yyerror("Tamanho dos argumentos não bate com o dos parametros");
			exit(0);
		}
		arg* aux_a = args;
		param* aux_p = params;
		while(aux_a!=NULL){
			no_arvore* atual = aux_a->expr;
			if(atual->dado.expr->tipo != aux_p->tipo){
				yyerror("Tipos incompatíveis.");
				exit(0);
			}
			aux_a = aux_a->prox;
			aux_p = aux_p->prox;

		}
		no_arvore* no = criar_no_func_call(func,args,label_funcs(funcs,func));
		$<dval>$ = (int) no;
	}
	;

argument_list:
	argument_list_not_void
	| {$<dval>$ = 0;}
	;

argument_list_not_void:
	argument
	| argument_list_not_void ',' argument {
		arg* args = $<dval>1;
		/*if(verificar_args(args,((arg*) $<dval>3)->id) == 0){
			yyerror("Argumento duplicado");
			exit(0);
		}*/
		arg* aux = args;
		while(aux->prox != NULL){
			aux= aux->prox;
		}
		aux->prox = $<dval>3;
		$<dval>$ = (int) args;
	}
	;

argument:
	expr {
		arg* args = NULL;

		no_arvore* no = $<dval>1;
		char* op = no->dado.expr->op;
		if(op == '>'){
			//printf("WHAT I NEED: %d\n",GT);
			yyerror("Tipo booleano!");
			exit(0);
		}
		if(op=='<'){
			//printf("WHAT I NEED: %d\n",LT);
			yyerror("Tipo booleano!");
			exit(0);
		}
		if(op=='>='){
			//printf("WHAT I NEED: %d\n",GE);
			yyerror("Tipo booleano!");
			exit(0);
		}
		if(op=='<='){
			//printf("WHAT I NEED: %d\n",LE);
			yyerror("Tipo booleano!");
			exit(0);
		}
		if(op=='=='){
			//printf("WHAT I NEED: %d\n",EQ);
			yyerror("Tipo booleano!");
			exit(0);
		}
		if(op=='!='){
			//printf("WHAT I NEED: %d\n",NE);
			yyerror("Tipo booleano!");
			exit(0);
		}

		args = inserir_args(args,no);

		if(args==NULL){
			yyerror("Erro na chamada de função");
		}

		$<dval>$ = (int) args;
	}
	;

expr:
	INTEIRO {
		no_arvore *no = criar_no_expressao(INTEIRO, (void *) $<dval>1, NULL);
		//printf("O inteiro tá aqui: %d\n",no->dado.expr->dir);
		$<dval>$ = (int) no; 
	}
	| REAL{
		float * nf = (float *) malloc (sizeof(float));
		*nf = $<fval>1;
		//printf("Aqui foi: %f\n",*((float*) nf));
		no_arvore *no = criar_no_expressao(REAL, (int) nf, NULL);
		$<dval>$ = (int) no; 
	}
	| variables {
		simbolo * s = localizar_simbolo(topo_pilha(pilha), (char *) $<dval>1);
	 	if(s == NULL){
			yyerror("Identificador não declarado");
			exit(0);
	 	}else{
			no_arvore *no = criar_no_expressao(ID, s, NULL);
			$<dval>$ = (int) no;
		}
	}
	| function_call
	| expr '+' expr {
		no_arvore* expr1 = (no_arvore*) $<dval>1;
		no_arvore* expr2 = (no_arvore*) $<dval>3;
		//printf("o bilhete tem de ser: %d\n",expr1->dado.expr->dir);
		//printf("o bilhete tem de ser: %f\n",*((float*) expr2->dado.expr->dir));
		//exit(0);
		int esq;
		int dir;
		esq = expr1->dado.expr->op;
		//printf("expr1 %d\n",esq);
		//printf("expr2\n");
		dir = expr2->dado.expr->op;
		//printf("%d %d %d %d\n",esq,INTEIRO,dir,REAL);
		no_arvore *no = criar_no_expressao('+', (void *) $<dval>1, (void *) $<dval>3);
		if(no->dado.expr->tipo == NULL){
			yyerror("Operações aritméticas apenas sobre valores de mesmo tipo");
			exit(0);
		}
		//printf("%d\n",no->dado.expr->tipo);
		$<dval>$ = (int) no;
	}
	| expr '-' expr {
		no_arvore *no = criar_no_expressao('-', (void *) $<dval>1, (void *) $<dval>3); 
		if(no->dado.expr->tipo == NULL){
			yyerror("Operações aritméticas apenas sobre valores de mesmo tipo");
			exit(0);
		}
		$<dval>$ = (int) no;
	}
	| expr '*' expr {
		no_arvore *no = criar_no_expressao('*', (void *) $<dval>1, (void *) $<dval>3); 
		if(no->dado.expr->tipo == NULL){
			yyerror("Operações aritméticas apenas sobre valores de mesmo tipo");
			exit(0);
		}
		$<dval>$ = (int) no;
	}
	| expr '/' expr {
		no_arvore *no = criar_no_expressao('/', (void *) $<dval>1, (void *) $<dval>3); 
		if(no->dado.expr->tipo == NULL){
			yyerror("Operações aritméticas apenas sobre valores de mesmo tipo");
			exit(0);
		}
		$<dval>$ = (int) no;
	}
	| expr '%' expr {
		no_arvore *no = criar_no_expressao('%', (void *) $<dval>1, (void *) $<dval>3); 
		$<dval>$ = (int) no;
	}
	| '(' expr ')' {
		$<dval>$ = $<dval>2;
	}
	| expr AND expr {
		no_arvore *no = criar_no_expressao('&&', (void *) $<dval>1, (void *) $<dval>3); 
		$<dval>$ = (int) no;
	}
	| expr OR expr {
		no_arvore *no = criar_no_expressao('||', (void *) $<dval>1, (void *) $<dval>3); 
		$<dval>$ = (int) no;
	}
	| NOT '(' expr ')'
	| expr GT expr {
		no_arvore *no = criar_no_expressao('>', (void *) $<dval>1, (void *) $<dval>3); 
		$<dval>$ = (int) no;
	}
	| expr LT expr {
		no_arvore *no = criar_no_expressao('<', (void *) $<dval>1, (void *) $<dval>3); 
		$<dval>$ = (int) no;
	}
	| expr GE expr {
		no_arvore *no = criar_no_expressao('>=', (void *) $<dval>1, (void *) $<dval>3); 
		$<dval>$ = (int) no;
	}
	| expr LE expr {
		no_arvore *no = criar_no_expressao('<=', (void *) $<dval>1, (void *) $<dval>3); 
		$<dval>$ = (int) no;
	}
	| expr EQ expr {
		no_arvore *no = criar_no_expressao('==', (void *) $<dval>1, (void *) $<dval>3); 
		$<dval>$ = (int) no;
	}
	| expr NE expr {
		no_arvore *no = criar_no_expressao('!=', (void *) $<dval>1, (void *) $<dval>3); 
		$<dval>$ = (int) no;
	}
	;

attr:
	variables '=' expr ';' {
		simbolo* s = localizar_simbolo(topo_pilha(pilha), (char*) $<dval>1);
		if(s==NULL){
			yyerror("Variável não instanciada.");
			exit(0);
		}else{
			no_arvore* no = criar_no_atribuicao(s, (void*) $<dval>3);
			no_arvore* no_expr = (no_arvore*) $<dval>3;

			int tipo_atual = no_expr->dado.expr->tipo;

			if (tipo_atual > s->tipo){
				yyerror("Tipos incompatíveis.");
				exit(0);
			}else{
				$<dval>$ = (int) no;
			}
		}
	}
	;

cond:
	IF '(' expr ')' bloco {
		no_arvore *noBloco = (no_arvore*) $<dval>5;
		no_arvore *no = criar_no_condicao((t_expr *) $<dval>3, noBloco, NULL);
		$<dval>$ = (int) no;
	}
	| IF '(' expr ')' bloco ELSE bloco {
		no_arvore *noBlocoIf = (no_arvore*) $<dval>5;
		no_arvore *noBlocoElse = (no_arvore*) $<dval>7;
		no_arvore *no = criar_no_condicao((t_expr *) $<dval>3, noBlocoIf, noBlocoElse);
		$<dval>$ = (int) no;
	}
	;

loop:
	FOR '(' expr ')' bloco {
		no_arvore *noBloco = (no_arvore*) $<dval>5;
		no_arvore *no = criar_no_loop((t_expr *) $<dval>3, noBloco);
		$<dval>$ = (int) no;
	}
	;

ioop:
	PRINT '(' ID ')' ';' {
		simbolo* s = localizar_simbolo(topo_pilha(pilha),(char*) $<dval>3);
		if(s==NULL){
			yyerror("Variável não declarada.");
			exit(0);
		}
		no_arvore *no = criar_no_io((char*)s->lexema, (int)PRINT);
		$<dval>$ = (int) no;
	}
	| SCANF '(' ID ')' ';' {
		simbolo* s = localizar_simbolo(topo_pilha(pilha),(char*) $<dval>3);
		if(s==NULL){
			yyerror("Variável não declarada.");
			exit(0);
		}
		no_arvore *no = criar_no_io((char*)s->lexema, (int)SCANF);
		$<dval>$ = (int) no;
	}
	;

%%

void yyerror(char *s) {
	fprintf(stderr, "%s\n", s);
}

int main(void) {
	pilha = NULL;
	funcs = criar_tabela_funcoes();
	yyparse();
	return 0;
}