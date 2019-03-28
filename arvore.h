#ifndef ARVORE_H
#define ARVORE_H

#include <string.h>
#include "tabela.h"
#include "y.tab.h"

typedef struct t_expr {
	int op;
	int tipo; //float ou int
	void *dir, *esq;
	valor valor;
} t_expr;

typedef struct t_attr {
	simbolo *resultado;
	void *expressao;
} t_attr;

typedef struct t_stmts {
	void *stmts;
	void *stmt;
} t_stmts;

typedef struct t_funcs{
	void* funcs;
	void* func;
}t_funcs;

typedef struct t_func_call{
	void* func;
	void* args;
	int label_pos;
}t_func_call;

typedef struct t_cond {
	struct no_arvore *noBlocoIf;
	struct no_arvore *noBlocoElse;
	t_expr *expr;
} t_cond;

typedef struct t_loop {
	struct no_arvore *noBloco;
	t_expr *expr;
} t_loop;

typedef struct t_io {
	int type;
	char* id;
} t_io;

typedef struct t_decl{
	void* id;
	void* tipo;	
}t_decl;

typedef struct t_main{
	void* bloco;
}t_main;

typedef union valor_sintatico {
	t_expr *expr;
	t_attr *attr;
	t_stmts *stmts;
	t_cond *cond;
	t_loop *loop;
	t_decl *decl;
	t_io *io;
	t_funcs *funcs;
	t_func_call *func_call;
	t_main* main;
} valor_sintatico;

typedef struct no_arvore {
	int tipo; //expr, attr, stmt, ...
	valor_sintatico dado;
	//ponteiro para tabela de símbolos
} no_arvore;

no_arvore * criar_no_expressao(int op, void *dir, void *esq);
t_expr * criar_expressao(int op, void *dir, void *esq);

no_arvore * criar_no_atribuicao(simbolo *resultado, void *expressao);
t_attr * criar_atribuicao(simbolo *resultado, void *expressao);

no_arvore * criar_no_condicao(t_expr *expr, no_arvore *noBlocoIf, no_arvore *noBlocoElse);
t_cond * criar_condicao(t_expr *expr, no_arvore *noBlocoIf, no_arvore *noBlocoElse);

no_arvore * criar_no_loop(t_expr *expr, no_arvore *noBloco);
t_loop * criar_loop(t_expr *expr, no_arvore *noBloco);

no_arvore * criar_no_io(char* id, int type);
t_io * criar_io(char* id, int type);

no_arvore* criar_no_stmts(void* stmts, void* stmt);
t_stmts* criar_stmts(void* stmts, void* stmt);

no_arvore* criar_no_funcs(void* funcs, void* func);
t_funcs* criar_funcs(void* funcs, void* func);

no_arvore* criar_no_decl(void* id, void* tipo);
t_decl* criar_decl(void* id, void* tipo);

no_arvore* criar_no_func_call(void* func, void* args, int label_pos);
t_func_call* criar_func_call(void* func, void* args, int label_pos);

no_arvore* criar_no_main(void* bloco);
t_main* criar_main(void* bloco);

#endif