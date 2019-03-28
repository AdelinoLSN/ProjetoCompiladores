#ifndef TABELA_FUNC_H
#define TABELA_FUNC_H

typedef struct param{
	char* id;
	int tipo;
	struct param* prox;
}param;

typedef struct arg{
	void* expr;
	char* label;
	struct arg* prox;	
}arg;

typedef struct no_func{
	char* id;
	int tipo_return;
	param* params;
	no_arvore* bloco_func;
	struct no_func* prox;
}no_func;

typedef struct tabela_func{
	no_func* raiz;
}tabela_func;

tabela_func* criar_tabela_funcoes();
tabela_func* inserir_funcao(tabela_func* tabela,no_func* func);
no_func* criar_no_func(char* id,int tipo,param* params,no_arvore* bloco_func);

param* inserir_params(param* params, char* id, int tipo);
arg* inserir_args(arg* args, void* expr);

no_func* buscar_function(tabela_func* funcs, char* id);

int count_args(arg* args);
int count_params(param* params);

int verificar_args(arg* args, char* id);

int label_funcs(tabela_func* tabela, no_func* no);

void printar_params(param* p);
void print_funcoes(tabela_func* f);

#endif