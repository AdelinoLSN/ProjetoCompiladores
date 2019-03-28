#ifndef CODIGO_INTERMEDIARIO_H
#define CODIGO_INTERMEDIARIO_H

#include <string.h>
#include "arvore.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "arvore.h"
#include "codigo_intermediario.h"
#include "y.tab.h"

typedef struct tabela_auxiliar{
	void* id;
	void* label;
	struct tabela_auxiliar* prox;
}tabela_auxiliar;

char * gerar_temp();
char * gerar_label();

void gerar_codigo(no_arvore * raiz);
void gerar_codigo_stmts(no_arvore* raiz);
void gerar_codigo_cond(no_arvore *raiz);

void gerar_codigo_loop (no_arvore *raiz);
char * gerar_codigo_expr(no_arvore *raiz);
void gerar_codigo_attr(no_arvore *raiz);

void gerar_goto_inicial(char* label);
void inserir_label_principal(char* label);

void token(int token);

tabela_auxiliar* inserir_tabela_auxiliar(tabela_auxiliar* t, void* id, void* label);
int buscar_label_func(tabela_auxiliar* funcoes,char* id);

#endif
