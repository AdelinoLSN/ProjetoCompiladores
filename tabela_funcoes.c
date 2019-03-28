#include "tabela_funcoes.h"

tabela_func* criar_tabela_funcoes(){
	tabela_func* novo = (tabela_func*)malloc(sizeof(tabela_func));
	novo->raiz = NULL;
	return novo;
}

tabela_func* inserir_funcao(tabela_func* tabela,no_func* func){
	no_func* novo = func;
	if (tabela->raiz==NULL){
		tabela->raiz = novo;
		return tabela;
	}
	no_func* aux = tabela->raiz;
	while(aux->prox!=NULL)
		aux=aux->prox;
	aux->prox = novo;
	return tabela;
}

no_func* criar_no_func(char* id,int tipo,param* params,no_arvore* bloco_func){
	no_func* novo = (no_func*)malloc(sizeof(no_func));
	novo->id = strdup(id);
	novo->params = params;
	novo->tipo_return = tipo;
	novo->bloco_func = bloco_func;
	return novo;
}

param* inserir_params(param* params, char* id, int tipo){
	param* novo = (param*)malloc(sizeof(param));
	novo->id = id;
	novo->tipo = tipo;
	novo->prox = NULL;
	if (params==NULL){
		return novo;
	}param* aux = params;
	while(aux->prox!=NULL){
		aux=aux->prox;
	}
	aux->prox = novo;
	return params;
}

arg* inserir_args(arg* args, void* expr){
	arg* novo = (arg*)malloc(sizeof(arg));
	novo->expr = expr;
	novo->label = NULL;
	novo->prox = NULL;
	return novo;
}

no_func* buscar_function(tabela_func* funcs, char* id){
	if (funcs->raiz == NULL){
		return NULL;
	}no_func* aux = funcs->raiz;
	while(aux != NULL){
		if(strcmp(aux->id,id)==0){
			return aux;
		}aux= aux->prox;
	}
	return NULL;
}

int count_args(arg* args){
	if(args==NULL){
		return 0;
	}arg* aux = args;
	int contador = 0;
	while(aux!=NULL){
		contador++;
		aux=aux->prox;
	}
	return contador;
}

int count_params(param* params){
	if(params==NULL){
		return 0;
	}param* aux = params;
	int contador = 0;
	while(aux!=NULL){
		contador++;
		aux=aux->prox;
	}
	return contador;
}

int label_funcs(tabela_func* tabela, no_func* no){
	int contador = 0;
	no_func* aux = tabela->raiz;
	while(aux!=no){
		aux=aux->prox;
		contador++;
	}
	return contador;
}

/////

void printar_params(param* p){
	param* aux = p;
	while(aux!=NULL){
		printf("%s %d\n",aux->id,aux->tipo);
		aux=aux->prox;
	}
}

void print_funcoes(tabela_func* f){
	printf("\n");
	no_func* atual = f->raiz;
	while(atual!=NULL){
		printf("FUNCAO\n");
		printf("ID: %s, TIPO: %d \nPARAMS:\n",atual->id,atual->tipo_return);
		printar_params(atual->params);
		if (atual->bloco_func!=NULL)
			printf("PONTEIRO BLOCO: %d\n",atual->bloco_func);
		atual=atual->prox;
		printf("END FUNCAO\n\n");
	}
}

