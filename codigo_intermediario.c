#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "arvore.h"
#include "codigo_intermediario.h"
#include "tabela_funcoes.h"
#include "y.tab.h"

int temp_ctr = 1;

int label_ctr = 1;

tabela_auxiliar* funcoes = NULL;
//lista_cod* cod_int;

int in_return = 0;

char * gerar_temp() {
	char buffer[256];
	sprintf(buffer, "t%d", temp_ctr++);
	return strdup(buffer);
}

char * gerar_label() {
	char buffer[256];
	sprintf(buffer, "l%d", label_ctr++);
	return strdup(buffer);
}

void gerar_codigo_completo(no_arvore *raiz){
	//lista_cod* cod_int = criar_lista_cod_int();

	char* labelinicio = gerar_label();
	gerar_goto_inicial(labelinicio);

	inserir_label_principal(labelinicio);

	gerar_codigo(raiz);
}

void gerar_goto_inicial(char* label){
	printf("goto main\n");
}

void inserir_label_principal(char* label){
	printf("%s:\n", label);
}

void gerar_codigo(no_arvore * raiz) {
	if(raiz != NULL) {
		//printf("%d\n",raiz->tipo);
		//token((int)raiz->tipo);
		//printf("TO AQUI\n");
		switch((int) raiz->tipo) {
			case MAIN:
				printf("main: \n");
				gerar_codigo(raiz->dado.main->bloco);
				break;
			case FUNC_CALL:
				gerar_codigo_func_call(raiz);
				break;
			case FUNC:
				gerar_codigo_funcs(raiz);
				break;
			case IO:
				gerar_codigo_ioop(raiz);
				break;
			case EXPR:
				gerar_codigo_expr(raiz);
				break;
			case ATTR:
				gerar_codigo_attr(raiz);
				break;
			case COND:
				gerar_codigo_cond(raiz);
				break;
			case LOOP:
				gerar_codigo_loop(raiz);
				break;
			case DECL:
				break;
			case STMTS:
				gerar_codigo_stmts(raiz);
				break;
		}

	}
}

void gerar_codigo_func_call(no_arvore* raiz){
	t_func_call* dado = raiz->dado.func_call;
	arg* args = dado->args;
	while(args!=NULL){
		char* addr1 = gerar_codigo_expr((no_arvore*) args->expr);
		char* addr2 = gerar_temp();
		printf("%s = %s\n",addr2,addr1);

		args->label = addr2;
		args=args->prox;
	}
	args = dado->args;
	while(args!=NULL){
		printf("param %s\n",args->label);
		args=args->prox;
	}

	no_func* f = dado->func;
	printf("goto %s\n",f->id);

	char* addr3 = gerar_temp();
	printf("%s = %s\n",addr3,f->id);
}

void gerar_codigo_funcs(no_arvore* raiz){
	gerar_codigo(raiz->dado.funcs->funcs);
	gerar_codigo_func(raiz->dado.funcs->func);
}

void gerar_codigo_func(no_func* func){
	funcoes = inserir_tabela_auxiliar(funcoes,func->id,label_ctr-1);
	gerar_codigo(func->bloco_func);
}


void gerar_codigo_stmts(no_arvore* raiz){
	if(raiz!=NULL){
		gerar_codigo(raiz->dado.stmts->stmts);
		gerar_codigo(raiz->dado.stmts->stmt);
	}
}

void gerar_codigo_cond(no_arvore *raiz) {
	t_cond * dado = raiz->dado.cond;

	char *lfalse = gerar_label(); 
	char *lfim = gerar_label();

	char * addr = gerar_codigo_expr((no_arvore *) dado->expr);

	printf("if_false %s goto %s\n", addr, lfalse);

	gerar_codigo(dado->noBlocoIf);

	printf("goto %s\n", lfim);
	printf("%s:\n", lfalse);

	gerar_codigo(dado->noBlocoElse);

	printf("%s:\n", lfim);

}

void gerar_codigo_loop (no_arvore *raiz) {
	t_loop * dado = raiz->dado.loop;

	char *linicio = gerar_label(); 
	char *lfim = gerar_label();

	printf("%s:\n", linicio);

	char* addr = gerar_codigo_expr((no_arvore *) dado->expr);
	
	printf("if_false %s goto %s\n", addr, lfim);
	
	gerar_codigo(dado->noBloco);

	printf("goto %s\n", linicio);
	
	printf("%s:\n", lfim);
}

void gerar_codigo_return(no_arvore* raiz){
	//printf("IM HERE\n");
	gerar_codigo_expr(raiz);
	printf("return t%d\n",temp_ctr-1);
}

char * gerar_codigo_expr(no_arvore *raiz) {
	char buffer[256];
	char *addr1, *addr2, *addr3;
	if(raiz != NULL) {
		simbolo *s;
		t_expr * dado = raiz->dado.expr;
		if(dado->tipo == RETURN && in_return == 0){
			in_return = 1;
			gerar_codigo_return(raiz);
			//printf("what you need %d\n",dado->tipo);
			in_return=0;
		}
		else{
				switch (dado->op) {
							case INTEIRO: 
								sprintf(buffer, "%d", (int) dado->dir);
								return strdup(buffer);
							case REAL:
								sprintf(buffer, "%f", *((float *) dado->dir));
								return strdup(buffer);
							case ID:
								s = (simbolo *) dado->dir;
								return s->lexema;
			
							case '+':
							case '-':
								
								addr1 = gerar_codigo_expr((no_arvore *) dado->dir);
								addr2 = gerar_codigo_expr((no_arvore *) dado->esq);
								addr3 = gerar_temp(); 				
								printf("%s = %s %c %s\n", addr3, addr1, dado->op, addr2);
								return addr3;
			
							case '*':
							case '/':
							case '%':
								
								addr1 = gerar_codigo_expr((no_arvore *) dado->dir);
								addr2 = gerar_codigo_expr((no_arvore *) dado->esq);
								addr3 = gerar_temp(); 				
								printf("%s = %s %c %s\n", addr3, addr1, dado->op, addr2);
								return addr3;
			
							case '>':
							case '<':
							case '>=':
							case '<=':
							case '==':
							case '!=':
								
								addr1 = gerar_codigo_expr((no_arvore *) dado->dir);
								addr2 = gerar_codigo_expr((no_arvore *) dado->esq);
								addr3 = gerar_temp(); 				
								printf("%s = %s %c %s\n", addr3, addr1, dado->op, addr2);
								return addr3;
			}
		}
	}	
}

void gerar_codigo_attr(no_arvore *raiz) {
	t_attr * dado = raiz->dado.attr;	
	char * addr = gerar_codigo_expr(dado->expressao);
	simbolo *s = (simbolo *) dado->resultado;
	printf("%s = %s\n", s->lexema, addr);
}

void gerar_codigo_ioop(no_arvore* raiz){
	t_io* dado = raiz->dado.io;
	switch(dado->type){
		case PRINT:
			printf("print %s\n",dado->id);
			break;
		case SCANF:
			printf("scan %s\n",dado->id);
			break;			
	}
}

tabela_auxiliar* inserir_tabela_auxiliar(tabela_auxiliar* t, void* id, void* label){
	tabela_auxiliar* no = (tabela_auxiliar*)malloc(sizeof(tabela_auxiliar));
	no->id = id;
	no->label = label;
	no->prox = NULL;
	if(t==NULL){
		return no;
	}
	tabela_auxiliar* temp = t;
	while(temp->prox!=NULL){
		temp=temp->prox;
	}
	temp->prox = no;
	return t;
}

int buscar_label_func(tabela_auxiliar* funcoes,char* id){
	tabela_auxiliar* temp = funcoes;
	while(temp != NULL){
		if(strcmp(temp->id,id)==0)
			return temp->label;
		temp=temp->prox;
	}
}

void token(int token){
	if (token == STMTS)
		printf('STMTS\n');
	else if (token == STMT)
		printf('STMT\n');
	else if (token == COND)
		printf('COND\n');
	else if (token == LOOP)
		printf('LOOP\n');
	else if (token == EXPR)
		printf('EXPR\n');
	else if(token==DECL)
		printf("DECL\n");
}