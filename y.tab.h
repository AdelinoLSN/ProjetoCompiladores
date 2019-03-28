/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TYPE = 258,
    INT = 259,
    FLOAT = 260,
    GT = 261,
    LT = 262,
    GE = 263,
    LE = 264,
    EQ = 265,
    NE = 266,
    FUNC = 267,
    ID = 268,
    MAIN = 269,
    VAR = 270,
    IF = 271,
    ELSE = 272,
    FOR = 273,
    INTEIRO = 274,
    REAL = 275,
    AND = 276,
    OR = 277,
    NOT = 278,
    PRINT = 279,
    SCANF = 280,
    EXPR = 281,
    ATTR = 282,
    COND = 283,
    LOOP = 284,
    IO = 285,
    STMT = 286,
    STMTS = 287,
    DECL = 288,
    FUNC_CALL = 289,
    RETURN = 290
  };
#endif
/* Tokens.  */
#define TYPE 258
#define INT 259
#define FLOAT 260
#define GT 261
#define LT 262
#define GE 263
#define LE 264
#define EQ 265
#define NE 266
#define FUNC 267
#define ID 268
#define MAIN 269
#define VAR 270
#define IF 271
#define ELSE 272
#define FOR 273
#define INTEIRO 274
#define REAL 275
#define AND 276
#define OR 277
#define NOT 278
#define PRINT 279
#define SCANF 280
#define EXPR 281
#define ATTR 282
#define COND 283
#define LOOP 284
#define IO 285
#define STMT 286
#define STMTS 287
#define DECL 288
#define FUNC_CALL 289
#define RETURN 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 22 "analise_sinto_semantica.yacc" /* yacc.c:1909  */

    int dval;
    float fval;

#line 129 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
