#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "arvore.h"
#include "y.tab.h"

no_arvore * criar_no_expressao(int op, void *dir, void *esq) {
	no_arvore *novo = (no_arvore*) malloc(sizeof(no_arvore));
	novo->tipo = EXPR;
	novo->dado.expr =  criar_expressao(op, dir, esq);
	return novo;
}

t_expr * criar_expressao(int op, void *dir, void *esq) {
	t_expr * novo = (t_expr *) malloc(sizeof(t_expr));
	switch (op){
		case ID:
			novo->tipo = ((simbolo *) dir)->tipo;
			break;
		case INTEIRO:
			novo->tipo = INT;
			break;
		case REAL:
			novo->tipo = FLOAT;
			//printf("Tá tudo tranquilo! %d\n",dir );
			//printf("Aqui ó, %f\n",*((float*) dir));
			break;
		case '+':
			if (((no_arvore *) dir)->dado.expr->tipo != ((no_arvore *) esq)->dado.expr->tipo)
				novo->tipo = NULL;
			else
				novo->tipo = ((no_arvore *) dir)->dado.expr->tipo;
			break;
		case '-':
			if (((no_arvore *) dir)->dado.expr->tipo != ((no_arvore *) esq)->dado.expr->tipo)
				novo->tipo = NULL;
			else
				novo->tipo = ((no_arvore *) dir)->dado.expr->tipo;
			break;
		case '*':
			if (((no_arvore *) dir)->dado.expr->tipo != ((no_arvore *) esq)->dado.expr->tipo)
				novo->tipo = NULL;
			else
				novo->tipo = ((no_arvore *) dir)->dado.expr->tipo;
			break;
		case '/':
			if (((no_arvore *) dir)->dado.expr->tipo != ((no_arvore *) esq)->dado.expr->tipo)
				novo->tipo = NULL;
			else
				novo->tipo = ((no_arvore *) dir)->dado.expr->tipo;
			break;
	}
	novo->op = op;
	novo->dir = dir;
	novo->esq = esq;
	return novo;
}

no_arvore * criar_no_atribuicao(simbolo *resultado, void *expressao) {
	no_arvore *novo = (no_arvore*) malloc(sizeof(no_arvore));
	novo->tipo = ATTR;
	novo->dado.attr =  criar_atribuicao(resultado, expressao);
	return novo;
}

t_attr * criar_atribuicao(simbolo *resultado, void *expressao){ 
	t_attr * novo = (t_attr *) malloc(sizeof(t_attr));
	novo->resultado = resultado;
	novo->expressao = expressao;
	return novo;
}

no_arvore * criar_no_condicao(t_expr *expr, no_arvore *noBlocoIf, no_arvore *noBlocoElse) {
	no_arvore *novo = (no_arvore*) malloc(sizeof(no_arvore));
	novo->tipo = COND;
	novo->dado.cond =  criar_condicao(expr, noBlocoIf, noBlocoElse);
	return novo;
}

t_cond * criar_condicao(t_expr *expr, no_arvore *noBlocoIf, no_arvore *noBlocoElse) {
	t_cond * novo = (t_cond *) malloc(sizeof(t_cond));
	novo->noBlocoIf = noBlocoIf;
	novo->noBlocoElse = noBlocoElse;
	novo->expr = expr;
	return novo;
}

no_arvore * criar_no_loop(t_expr *expr, no_arvore *noBloco) {
	no_arvore *novo = (no_arvore*) malloc(sizeof(no_arvore));
	novo->tipo = LOOP;
	novo->dado.loop =  criar_loop(expr, noBloco);
	return novo;
}

t_loop * criar_loop(t_expr *expr, no_arvore *noBloco) {
	t_loop * novo = (t_loop *) malloc(sizeof(t_loop));
	novo->noBloco = noBloco;
	novo->expr = expr;
	return novo;
}

no_arvore * criar_no_io(char* id, int type) {
	no_arvore *novo = (no_arvore*) malloc(sizeof(no_arvore));
	novo->tipo = IO;
	novo->dado.io =  criar_io(id, type);
	return novo;
}

t_io * criar_io(char* id, int type) {
	t_io * novo = (t_io *) malloc(sizeof(t_io));
	novo->type = type;
	novo->id = strdup(id);
	return novo;
}

no_arvore* criar_no_stmts(void* stmts, void* stmt){
	no_arvore* no = (no_arvore*) malloc(sizeof(no_arvore));
	no->tipo = STMTS;
	no->dado.stmts = criar_stmts(stmts,stmt);
	return no;
}

t_stmts* criar_stmts(void* stmts, void* stmt){
	t_stmts* novo = (t_stmts*) malloc(sizeof(t_stmts));
	novo->stmts = stmts;
	novo->stmt = stmt;
	return novo;
}

no_arvore* criar_no_decl(void* id, void* tipo){
	no_arvore* no = (no_arvore*) malloc(sizeof(no_arvore));
	no->tipo = DECL;
	no->dado.decl = criar_decl(id,tipo);
	return no;
}

t_decl* criar_decl(void* id, void* tipo){
	t_decl* novo = (t_decl*) malloc(sizeof(t_decl));
	novo->id = strdup(id);
	novo->tipo = tipo;
	return novo;
}


no_arvore* criar_no_funcs(void* funcs, void* func){
	no_arvore* no = (no_arvore*) malloc(sizeof(no_arvore));
	no->tipo = FUNC;
	no->dado.funcs = criar_funcs(funcs,func);
	return no;
}

t_funcs* criar_funcs(void* funcs, void* func){
	t_funcs* novo = (t_funcs*) malloc(sizeof(t_funcs));
	novo->funcs = funcs;
	novo->func = func;
	return novo;
}

no_arvore* criar_no_func_call(void* func, void* args, int label_pos){
	no_arvore* no = (no_arvore*) malloc(sizeof(no_arvore));
	no->tipo = FUNC_CALL;
	no->dado.func_call = criar_func_call(func,args,label_pos);
	return no;
}

t_func_call* criar_func_call(void* func, void* args, int label_pos){
	t_func_call* novo = (t_func_call*)malloc(sizeof(t_func_call));
	novo->func = func;
	novo->args = args;
	novo->label_pos = label_pos;
	return novo;
}

no_arvore* criar_no_main(void* bloco){
	no_arvore* no = (no_arvore*) malloc(sizeof(no_arvore));
	no->tipo = MAIN;
	no->dado.main = criar_main(bloco);
	return no;
}

t_main* criar_main(void* bloco){
	t_main* novo = (t_main*)malloc(sizeof(t_main));
	novo->bloco = bloco;
	return novo;
}