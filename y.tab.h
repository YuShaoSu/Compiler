/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SEMICOLON = 258,
     ID = 259,
     SCIENTIFIC = 260,
     INTEGER = 261,
     FLOATCONST = 262,
     STRINGCONST = 263,
     CONST = 264,
     BOOL = 265,
     VOID = 266,
     FLOAT = 267,
     DOUBLE = 268,
     STRING = 269,
     INT = 270,
     READ = 271,
     PRINT = 272,
     WHILE = 273,
     DO = 274,
     IF = 275,
     ELSE = 276,
     FOR = 277,
     CONTINUE = 278,
     BREAK = 279,
     RETURN = 280,
     BOOLEAN = 281,
     TRUE = 282,
     FALSE = 283,
     LLP = 284,
     NE = 285,
     GE = 286,
     EQ = 287,
     LE = 288,
     AND = 289,
     OR = 290
   };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define ID 259
#define SCIENTIFIC 260
#define INTEGER 261
#define FLOATCONST 262
#define STRINGCONST 263
#define CONST 264
#define BOOL 265
#define VOID 266
#define FLOAT 267
#define DOUBLE 268
#define STRING 269
#define INT 270
#define READ 271
#define PRINT 272
#define WHILE 273
#define DO 274
#define IF 275
#define ELSE 276
#define FOR 277
#define CONTINUE 278
#define BREAK 279
#define RETURN 280
#define BOOLEAN 281
#define TRUE 282
#define FALSE 283
#define LLP 284
#define NE 285
#define GE 286
#define EQ 287
#define LE 288
#define AND 289
#define OR 290




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

