all:a.out

a.out: analise_lexica.lex analise_sinto_semantica.yacc arvore.c tabela.c tabela_funcoes.c 
	flex -l analise_lexica.lex
	yacc -vd analise_sinto_semantica.yacc
	gcc lex.yy.c y.tab.c -lm -ll -w

clean:
	rm a.out
