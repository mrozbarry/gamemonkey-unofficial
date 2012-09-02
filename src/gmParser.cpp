
/*  A Bison parser, made from gmparser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define yyparse gmparse
#define yylex gmlex
#define yyerror gmerror
#define yylval gmlval
#define yychar gmchar
#define yydebug gmdebug
#define yynerrs gmnerrs
#define	KEYWORD_LOCAL	258
#define	KEYWORD_GLOBAL	259
#define	KEYWORD_MEMBER	260
#define	KEYWORD_AND	261
#define	KEYWORD_OR	262
#define	KEYWORD_IF	263
#define	KEYWORD_ELSE	264
#define	KEYWORD_WHILE	265
#define	KEYWORD_FOR	266
#define	KEYWORD_FOREACH	267
#define	KEYWORD_IN	268
#define	KEYWORD_BREAK	269
#define	KEYWORD_CONTINUE	270
#define	KEYWORD_NULL	271
#define	KEYWORD_DOWHILE	272
#define	KEYWORD_RETURN	273
#define	KEYWORD_FUNCTION	274
#define	KEYWORD_TABLE	275
#define	KEYWORD_THIS	276
#define	KEYWORD_TRUE	277
#define	KEYWORD_FALSE	278
#define	KEYWORD_FORK	279
#define	IDENTIFIER	280
#define	CONSTANT_HEX	281
#define	CONSTANT_BINARY	282
#define	CONSTANT_INT	283
#define	CONSTANT_CHAR	284
#define	CONSTANT_FLOAT	285
#define	CONSTANT_STRING	286
#define	SYMBOL_ASGN_BSR	287
#define	SYMBOL_ASGN_BSL	288
#define	SYMBOL_ASGN_ADD	289
#define	SYMBOL_ASGN_MINUS	290
#define	SYMBOL_ASGN_TIMES	291
#define	SYMBOL_ASGN_DIVIDE	292
#define	SYMBOL_ASGN_REM	293
#define	SYMBOL_ASGN_BAND	294
#define	SYMBOL_ASGN_BOR	295
#define	SYMBOL_ASGN_BXOR	296
#define	SYMBOL_RIGHT_SHIFT	297
#define	SYMBOL_LEFT_SHIFT	298
#define	SYMBOL_LTE	299
#define	SYMBOL_GTE	300
#define	SYMBOL_EQ	301
#define	SYMBOL_NEQ	302
#define	TOKEN_ERROR	303



#define YYPARSER
#include "gmConfig.h"
#include "gmCodeTree.h"
#define YYSTYPE gmCodeTreeNode *

extern gmCodeTreeNode * g_codeTree;

#define GM_BISON_DEBUG
#ifdef GM_BISON_DEBUG
#define YYDEBUG 1
#define YYERROR_VERBOSE
#endif // GM_BISON_DEBUG

//
// HELPERS
//

void ATTACH(gmCodeTreeNode * &a_res, gmCodeTreeNode * a_a, gmCodeTreeNode * a_b)
{
  YYSTYPE t = a_a;
  if(t != NULL)
  {
    while(t->m_sibling != NULL)
    {
      t = t->m_sibling;
    }
    t->m_sibling = a_b;
    if(a_b) { a_b->m_parent = t; }
    a_res = a_a;
  }
  else
  {
    a_res = a_b;
  }
}

gmCodeTreeNode * CreateOperation(int a_subTypeType, gmCodeTreeNode * a_left = NULL, gmCodeTreeNode * a_right = NULL)
{
  gmCodeTreeNode * node = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_OPERATION, gmlineno, a_subTypeType);
  node->SetChild(0, a_left);
  node->SetChild(1, a_right);
  return node;
}

gmCodeTreeNode * CreateAsignExpression(int a_subTypeType, gmCodeTreeNode * a_left, gmCodeTreeNode * a_right)
{
  // we need to evaluate the complexety of the l-value... if it is a function call, index or dot to the left of a dot or index, we need to cache
  // into a hidden variable.

  // todo

  gmCodeTreeNode * opNode = CreateOperation(a_subTypeType, a_left, a_right);
  return CreateOperation(CTNOT_ASSIGN, a_left, opNode);
}


#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		260
#define	YYFLAG		-32768
#define	YYNTBASE	72

#define YYTRANSLATE(x) ((unsigned)(x) <= 303 ? yytranslate[x] : 111)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    67,     2,     2,     2,    65,    58,     2,    51,
    52,    63,    61,    71,    62,    53,    64,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    70,    54,    59,
    55,    60,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    68,     2,    69,    57,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    49,    56,    50,    66,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,     9,    11,    13,    15,    17,    19,
    22,    26,    32,    39,    45,    52,    56,    60,    64,    70,
    77,    85,    87,    89,    91,    93,    96,   102,   110,   118,
   122,   125,   131,   137,   144,   152,   160,   170,   173,   176,
   179,   183,   185,   189,   193,   197,   201,   205,   209,   213,
   217,   221,   225,   229,   231,   234,   236,   238,   242,   244,
   248,   250,   254,   256,   260,   262,   266,   268,   272,   276,
   278,   282,   286,   290,   294,   296,   300,   304,   306,   310,
   314,   316,   320,   324,   328,   330,   333,   335,   337,   339,
   341,   343,   348,   352,   357,   363,   370,   374,   376,   380,
   384,   389,   392,   396,   401,   407,   412,   414,   418,   420,
   424,   426,   430,   432,   436,   438,   441,   443,   445,   447,
   449,   453,   455,   457,   459,   461,   463,   465,   467,   469,
   471,   473,   475
};

static const short yyrhs[] = {    73,
     0,    74,     0,    73,    74,     0,    80,     0,    78,     0,
    81,     0,    82,     0,    83,     0,    76,     0,    49,    50,
     0,    49,    73,    50,     0,    19,   108,    51,    52,    75,
     0,    19,   108,    51,   105,    52,    75,     0,    19,    77,
    51,    52,    75,     0,    19,    77,    51,   105,    52,    75,
     0,   108,    53,   108,     0,    77,    53,   108,     0,    79,
   108,    54,     0,    79,   108,    55,    86,    54,     0,    79,
    19,   108,    51,    52,    75,     0,    79,    19,   108,    51,
   105,    52,    75,     0,     3,     0,     4,     0,     5,     0,
    54,     0,    84,    54,     0,     8,    51,    86,    52,    75,
     0,     8,    51,    86,    52,    75,     9,    75,     0,     8,
    51,    86,    52,    75,     9,    81,     0,    24,   108,    75,
     0,    24,    75,     0,    10,    51,    86,    52,    75,     0,
    17,    51,    86,    52,    75,     0,    11,    51,    80,    85,
    52,    75,     0,    11,    51,    80,    85,    84,    52,    75,
     0,    12,    51,   108,    13,    86,    52,    75,     0,    12,
    51,   108,     6,   108,    13,    86,    52,    75,     0,    15,
    54,     0,    14,    54,     0,    18,    54,     0,    18,    86,
    54,     0,    87,     0,    99,    55,    87,     0,    99,    32,
    87,     0,    99,    33,    87,     0,    99,    34,    87,     0,
    99,    35,    87,     0,    99,    36,    87,     0,    99,    37,
    87,     0,    99,    38,    87,     0,    99,    39,    87,     0,
    99,    40,    87,     0,    99,    41,    87,     0,    54,     0,
    86,    54,     0,    87,     0,    88,     0,    87,     7,    88,
     0,    89,     0,    88,     6,    89,     0,    90,     0,    89,
    56,    90,     0,    91,     0,    90,    57,    91,     0,    92,
     0,    91,    58,    92,     0,    93,     0,    92,    46,    93,
     0,    92,    47,    93,     0,    94,     0,    93,    59,    94,
     0,    93,    60,    94,     0,    93,    44,    94,     0,    93,
    45,    94,     0,    95,     0,    94,    43,    95,     0,    94,
    42,    95,     0,    96,     0,    95,    61,    96,     0,    95,
    62,    96,     0,    97,     0,    96,    63,    97,     0,    96,
    64,    97,     0,    96,    65,    97,     0,    99,     0,    98,
    97,     0,    61,     0,    62,     0,    66,     0,    67,     0,
   107,     0,    99,    68,    86,    69,     0,    99,    51,    52,
     0,    99,    51,   100,    52,     0,    99,    70,   108,    51,
    52,     0,    99,    70,   108,    51,   100,    52,     0,    99,
    53,   108,     0,    86,     0,   100,    71,    86,     0,    20,
    51,    52,     0,    20,    51,   103,    52,     0,    49,    50,
     0,    49,   103,    50,     0,    49,   103,    71,    50,     0,
    19,    51,   105,    52,    75,     0,    19,    51,    52,    75,
     0,   104,     0,   103,    71,   104,     0,    86,     0,   108,
    55,    86,     0,   106,     0,   105,    71,   106,     0,   108,
     0,   108,    55,    86,     0,   108,     0,    53,   108,     0,
    21,     0,   109,     0,   101,     0,   102,     0,    51,    86,
    52,     0,    25,     0,    26,     0,    27,     0,    28,     0,
    22,     0,    23,     0,    29,     0,    30,     0,   110,     0,
    16,     0,    31,     0,   110,    31,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   123,   130,   134,   141,   145,   149,   153,   157,   161,   168,
   172,   181,   192,   204,   212,   224,   228,   235,   240,   246,
   255,   268,   272,   276,   282,   286,   293,   299,   306,   313,
   319,   327,   333,   339,   346,   354,   361,   372,   376,   380,
   384,   392,   400,   404,   408,   412,   416,   420,   424,   428,
   432,   436,   440,   448,   452,   459,   466,   470,   477,   481,
   488,   492,   500,   504,   512,   516,   524,   528,   532,   539,
   543,   547,   551,   555,   562,   566,   571,   579,   583,   588,
   596,   600,   605,   610,   618,   622,   631,   635,   639,   643,
   650,   654,   658,   663,   669,   675,   682,   689,   693,   700,
   704,   709,   713,   718,   726,   732,   740,   744,   751,   755,
   762,   766,   773,   778,   787,   791,   796,   800,   804,   808,
   812,   819,   828,   833,   838,   843,   848,   853,   899,   904,
   908,   916,   930
};

static const char * const yytname[] = {   "$","error","$undefined.","KEYWORD_LOCAL",
"KEYWORD_GLOBAL","KEYWORD_MEMBER","KEYWORD_AND","KEYWORD_OR","KEYWORD_IF","KEYWORD_ELSE",
"KEYWORD_WHILE","KEYWORD_FOR","KEYWORD_FOREACH","KEYWORD_IN","KEYWORD_BREAK",
"KEYWORD_CONTINUE","KEYWORD_NULL","KEYWORD_DOWHILE","KEYWORD_RETURN","KEYWORD_FUNCTION",
"KEYWORD_TABLE","KEYWORD_THIS","KEYWORD_TRUE","KEYWORD_FALSE","KEYWORD_FORK",
"IDENTIFIER","CONSTANT_HEX","CONSTANT_BINARY","CONSTANT_INT","CONSTANT_CHAR",
"CONSTANT_FLOAT","CONSTANT_STRING","SYMBOL_ASGN_BSR","SYMBOL_ASGN_BSL","SYMBOL_ASGN_ADD",
"SYMBOL_ASGN_MINUS","SYMBOL_ASGN_TIMES","SYMBOL_ASGN_DIVIDE","SYMBOL_ASGN_REM",
"SYMBOL_ASGN_BAND","SYMBOL_ASGN_BOR","SYMBOL_ASGN_BXOR","SYMBOL_RIGHT_SHIFT",
"SYMBOL_LEFT_SHIFT","SYMBOL_LTE","SYMBOL_GTE","SYMBOL_EQ","SYMBOL_NEQ","TOKEN_ERROR",
"'{'","'}'","'('","')'","'.'","';'","'='","'|'","'^'","'&'","'<'","'>'","'+'",
"'-'","'*'","'/'","'%'","'~'","'!'","'['","']'","':'","','","program","statement_list",
"statement","compound_statement","function_statement","tablemember_expression",
"var_statement","var_type","expression_statement","selection_statement","iteration_statement",
"jump_statement","assignment_expression","constant_expression_statement","constant_expression",
"logical_or_expression","logical_and_expression","inclusive_or_expression","exclusive_or_expression",
"and_expression","equality_expression","relational_expression","shift_expression",
"additive_expression","multiplicative_expression","unary_expression","unary_operator",
"postfix_expression","argument_expression_list","table_constructor","function_constructor",
"field_list","field","parameter_list","parameter","primary_expression","identifier",
"constant","constant_string_list",""
};
#endif

static const short yyr1[] = {     0,
    72,    73,    73,    74,    74,    74,    74,    74,    74,    75,
    75,    76,    76,    76,    76,    77,    77,    78,    78,    78,
    78,    79,    79,    79,    80,    80,    81,    81,    81,    81,
    81,    82,    82,    82,    82,    82,    82,    83,    83,    83,
    83,    84,    84,    84,    84,    84,    84,    84,    84,    84,
    84,    84,    84,    85,    85,    86,    87,    87,    88,    88,
    89,    89,    90,    90,    91,    91,    92,    92,    92,    93,
    93,    93,    93,    93,    94,    94,    94,    95,    95,    95,
    96,    96,    96,    96,    97,    97,    98,    98,    98,    98,
    99,    99,    99,    99,    99,    99,    99,   100,   100,   101,
   101,   101,   101,   101,   102,   102,   103,   103,   104,   104,
   105,   105,   106,   106,   107,   107,   107,   107,   107,   107,
   107,   108,   109,   109,   109,   109,   109,   109,   109,   109,
   109,   110,   110
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     1,     1,     1,     1,     2,
     3,     5,     6,     5,     6,     3,     3,     3,     5,     6,
     7,     1,     1,     1,     1,     2,     5,     7,     7,     3,
     2,     5,     5,     6,     7,     7,     9,     2,     2,     2,
     3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     1,     2,     1,     1,     3,     1,     3,
     1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
     3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
     1,     3,     3,     3,     1,     2,     1,     1,     1,     1,
     1,     4,     3,     4,     5,     6,     3,     1,     3,     3,
     4,     2,     3,     4,     5,     4,     1,     3,     1,     3,
     1,     3,     1,     3,     1,     2,     1,     1,     1,     1,
     3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     2
};

static const short yydefact[] = {     0,
    22,    23,    24,     0,     0,     0,     0,     0,     0,   131,
     0,     0,     0,     0,   117,   126,   127,     0,   122,   123,
   124,   125,   128,   129,   132,     0,     0,     0,    25,    87,
    88,    89,    90,     1,     2,     9,     5,     0,     4,     6,
     7,     8,     0,    42,    57,    59,    61,    63,    65,    67,
    70,    75,    78,    81,     0,    85,   119,   120,    91,   115,
   118,   130,     0,     0,     0,     0,    39,    38,     0,     0,
    40,     0,    56,    85,     0,     0,     0,     0,     0,    31,
     0,   102,   109,     0,   107,   115,     0,   116,     3,     0,
     0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   133,     0,     0,     0,
     0,     0,    41,     0,     0,   111,   113,     0,     0,     0,
     0,   100,     0,    10,     0,    30,   103,     0,     0,   121,
     0,    18,     0,    58,    60,    62,    64,    66,    68,    69,
    73,    74,    71,    72,    77,    76,    79,    80,    82,    83,
    84,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    93,    98,     0,    97,    43,     0,     0,     0,     0,
    54,     0,     0,     0,     0,     0,   106,     0,     0,     0,
     0,     0,    17,     0,     0,    16,   101,     0,    11,   104,
   108,   110,     0,     0,    94,     0,    92,     0,    27,    32,
     0,     0,    55,     0,     0,    33,   105,   112,   114,    14,
     0,    12,     0,     0,     0,    19,    99,    95,     0,     0,
    34,     0,     0,     0,    15,    13,    20,     0,    96,    28,
    29,    35,     0,    36,    21,     0,    37,     0,     0,     0
};

static const short yydefgoto[] = {   258,
    34,    35,    80,    36,    76,    37,    38,    39,    40,    41,
    42,    43,   192,    83,    73,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    74,   184,    57,    58,
    84,    85,   135,   136,    59,    60,    61,    62
};

static const short yypact[] = {   344,
-32768,-32768,-32768,   -33,    18,    25,    30,    17,    33,-32768,
    44,   393,   -17,    56,-32768,-32768,-32768,    -9,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   442,   834,    28,-32768,-32768,
-32768,-32768,-32768,   344,-32768,-32768,-32768,    53,-32768,-32768,
-32768,-32768,    55,    67,   110,    75,    76,    77,    42,    79,
    48,    31,    20,-32768,   834,    64,-32768,-32768,-32768,-32768,
-32768,   105,   834,   834,   491,    28,-32768,-32768,   834,    89,
-32768,    93,    67,    -6,   -16,   -32,     5,   540,   224,-32768,
    99,-32768,-32768,   -25,-32768,    94,    98,-32768,-32768,    28,
    57,-32768,   834,   834,   834,   834,   834,   834,   834,   834,
   834,   834,   834,   834,   834,   834,   834,   834,   834,   834,
-32768,   834,   834,   834,   834,   834,   834,   834,   834,   834,
   834,   589,    28,   834,   834,    28,-32768,   114,   115,   638,
     7,   116,-32768,    99,   -38,-32768,    96,   -15,    28,   -14,
    28,-32768,   -28,-32768,   284,-32768,-32768,   687,   834,-32768,
   118,-32768,   834,   110,    75,    76,    77,    42,    79,    79,
    48,    48,    48,    48,    31,    31,    20,    20,-32768,-32768,
-32768,    67,    67,    67,    67,    67,    67,    67,    67,    67,
    67,-32768,-32768,   -21,-32768,    67,   102,   122,    99,    99,
-32768,   736,   120,    28,   834,    99,-32768,    99,    28,   834,
    99,    -8,-32768,    99,    -3,-32768,-32768,   834,-32768,-32768,
-32768,-32768,   -13,   123,-32768,   834,-32768,   785,   167,-32768,
    99,   127,-32768,   168,   128,-32768,-32768,-32768,-32768,-32768,
    99,-32768,    99,    99,     2,-32768,-32768,-32768,    15,    -1,
-32768,    99,   834,    99,-32768,-32768,-32768,    99,-32768,-32768,
-32768,-32768,   130,-32768,-32768,    99,-32768,   184,   185,-32768
};

static const short yypgoto[] = {-32768,
   108,   -31,   -26,-32768,-32768,-32768,-32768,   124,   -50,-32768,
-32768,     0,-32768,   -12,    41,   101,    97,   104,   100,   103,
    23,   -74,    21,    22,   -49,-32768,     1,    -7,-32768,-32768,
   119,  -143,  -136,     3,-32768,     4,-32768,-32768
};


#define	YYLAST		901


static const short yytable[] = {    72,
    56,   202,    89,   205,   211,   111,     4,    19,    19,    19,
    19,    19,   194,   198,    87,    19,    77,    63,   138,   195,
   139,    81,    18,   207,   147,   161,   162,   163,   164,    86,
   215,    88,   199,    75,    56,   134,   201,   204,   234,    79,
    44,    91,   208,   231,   122,   148,   123,    79,   233,   216,
   128,   129,    19,   248,   146,   140,   132,   141,   169,   170,
   171,   125,   199,   126,   211,    56,   249,   199,    64,   131,
    67,    90,   199,    93,    44,    65,   235,    19,   137,    56,
    66,    86,   108,   109,   110,   216,    68,    98,    99,   104,
   105,   106,   107,   151,    69,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,    44,    78,   197,    92,   183,
   152,   153,   187,    89,   122,    94,   123,   193,   124,    44,
   159,   160,   100,   101,   165,   166,   185,   167,   168,   188,
    95,   125,    96,   126,    97,   127,   212,   102,   103,    75,
   214,   137,   203,   137,   206,    56,   133,    79,   149,   150,
   200,    86,   172,   173,   174,   175,   176,   177,   178,   179,
   180,   181,   219,   220,   186,   189,   190,   196,   213,   226,
   217,   227,   218,   223,   230,   240,   236,   232,   242,   244,
   243,   256,   225,   259,   260,    44,   145,   229,   130,   251,
   155,   222,    56,   154,   241,   157,   143,   224,   156,   158,
     0,   228,   137,   237,   245,   183,   246,   247,     0,     0,
   239,    86,     0,   250,     0,   252,   137,   254,     0,     0,
     0,   255,     0,     0,     0,     0,     1,     2,     3,   257,
   253,     4,    44,     5,     6,     7,     0,     8,     9,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    26,   144,    27,     0,    28,    29,     0,     0,
     0,     0,     0,     0,    30,    31,     1,     2,     3,    32,
    33,     4,     0,     5,     6,     7,     0,     8,     9,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    26,   209,    27,     0,    28,    29,     0,     0,
     0,     0,     0,     0,    30,    31,     1,     2,     3,    32,
    33,     4,     0,     5,     6,     7,     0,     8,     9,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    26,     0,    27,     0,    28,    29,     0,     0,
     0,     0,     0,     0,    30,    31,     0,     0,    10,    32,
    33,    70,    14,    15,    16,    17,     0,    19,    20,    21,
    22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    26,     0,    27,     0,    28,    71,     0,     0,     0,
     0,     0,     0,    30,    31,     0,     0,    10,    32,    33,
    70,    14,    15,    16,    17,     0,    19,    20,    21,    22,
    23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    26,    82,    27,     0,    28,     0,     0,     0,     0,     0,
     0,     0,    30,    31,     0,     0,    10,    32,    33,    70,
    14,    15,    16,    17,     0,    19,    20,    21,    22,    23,
    24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
     0,    27,     0,    28,    29,     0,     0,     0,     0,     0,
     0,    30,    31,     0,     0,    10,    32,    33,    70,    14,
    15,    16,    17,     0,    19,    20,    21,    22,    23,    24,
    25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
    27,   142,    28,     0,     0,     0,     0,     0,     0,     0,
    30,    31,     0,     0,    10,    32,    33,    70,    14,    15,
    16,    17,     0,    19,    20,    21,    22,    23,    24,    25,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
   182,    28,     0,     0,     0,     0,     0,     0,     0,    30,
    31,     0,     0,    10,    32,    33,    70,    14,    15,    16,
    17,     0,    19,    20,    21,    22,    23,    24,    25,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
    28,   191,     0,     0,     0,     0,     0,     0,    30,    31,
     0,     0,    10,    32,    33,    70,    14,    15,    16,    17,
     0,    19,    20,    21,    22,    23,    24,    25,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    26,   210,    27,     0,    28,
     0,     0,     0,     0,     0,     0,     0,    30,    31,     0,
     0,    10,    32,    33,    70,    14,    15,    16,    17,     0,
    19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    26,     0,    27,   221,    28,     0,
     0,     0,     0,     0,     0,     0,    30,    31,     0,     0,
    10,    32,    33,    70,    14,    15,    16,    17,     0,    19,
    20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    26,     0,    27,   238,    28,     0,     0,
     0,     0,     0,     0,     0,    30,    31,     0,     0,    10,
    32,    33,    70,    14,    15,    16,    17,     0,    19,    20,
    21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    26,     0,    27,     0,    28,     0,     0,     0,
     0,     0,     0,     0,    30,    31,     0,     0,     0,    32,
    33
};

static const short yycheck[] = {    12,
     0,   138,    34,   140,   148,    55,     8,    25,    25,    25,
    25,    25,     6,    52,    27,    25,    13,    51,    51,    13,
    53,    18,    24,    52,    50,   100,   101,   102,   103,    26,
    52,    28,    71,    51,    34,    52,    52,    52,    52,    49,
     0,    38,    71,    52,    51,    71,    53,    49,    52,    71,
    63,    64,    25,    52,    81,    51,    69,    53,   108,   109,
   110,    68,    71,    70,   208,    65,    52,    71,    51,    66,
    54,    19,    71,     7,    34,    51,   213,    25,    75,    79,
    51,    78,    63,    64,    65,    71,    54,    46,    47,    42,
    43,    61,    62,    90,    51,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    65,    51,   134,    54,   122,
    54,    55,   125,   145,    51,     6,    53,   130,    55,    79,
    98,    99,    44,    45,   104,   105,   123,   106,   107,   126,
    56,    68,    57,    70,    58,    31,   149,    59,    60,    51,
   153,   138,   139,   140,   141,   145,    54,    49,    55,    52,
    55,   148,   112,   113,   114,   115,   116,   117,   118,   119,
   120,   121,   189,   190,   124,    52,    52,    52,    51,   196,
    69,   198,    51,    54,   201,     9,    54,   204,    52,    52,
    13,    52,   195,     0,     0,   145,    79,   200,    65,   240,
    94,   192,   192,    93,   221,    96,    78,   194,    95,    97,
    -1,   199,   199,   216,   231,   218,   233,   234,    -1,    -1,
   218,   208,    -1,   240,    -1,   242,   213,   244,    -1,    -1,
    -1,   248,    -1,    -1,    -1,    -1,     3,     4,     5,   256,
   243,     8,   192,    10,    11,    12,    -1,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    49,    50,    51,    -1,    53,    54,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,     3,     4,     5,    66,
    67,     8,    -1,    10,    11,    12,    -1,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    49,    50,    51,    -1,    53,    54,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,     3,     4,     5,    66,
    67,     8,    -1,    10,    11,    12,    -1,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    49,    -1,    51,    -1,    53,    54,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    16,    66,
    67,    19,    20,    21,    22,    23,    -1,    25,    26,    27,
    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    49,    -1,    51,    -1,    53,    54,    -1,    -1,    -1,
    -1,    -1,    -1,    61,    62,    -1,    -1,    16,    66,    67,
    19,    20,    21,    22,    23,    -1,    25,    26,    27,    28,
    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    49,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    61,    62,    -1,    -1,    16,    66,    67,    19,
    20,    21,    22,    23,    -1,    25,    26,    27,    28,    29,
    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
    -1,    51,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    62,    -1,    -1,    16,    66,    67,    19,    20,
    21,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    61,    62,    -1,    -1,    16,    66,    67,    19,    20,    21,
    22,    23,    -1,    25,    26,    27,    28,    29,    30,    31,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,
    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
    62,    -1,    -1,    16,    66,    67,    19,    20,    21,    22,
    23,    -1,    25,    26,    27,    28,    29,    30,    31,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,
    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
    -1,    -1,    16,    66,    67,    19,    20,    21,    22,    23,
    -1,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    -1,    53,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
    -1,    16,    66,    67,    19,    20,    21,    22,    23,    -1,
    25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
    16,    66,    67,    19,    20,    21,    22,    23,    -1,    25,
    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    49,    -1,    51,    52,    53,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    16,
    66,    67,    19,    20,    21,    22,    23,    -1,    25,    26,
    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    49,    -1,    51,    -1,    53,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    66,
    67
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */


/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         -2
#define YYEOF           0
#define YYACCEPT        return(0)
#define YYABORT         return(1)
#define YYERROR         goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL          goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do                                                              \
  if (yychar == YYEMPTY && yylen == 1)                          \
    { yychar = (token), yylval = (value);                       \
      yychar1 = YYTRANSLATE (yychar);                           \
      YYPOPSTACK;                                               \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    { yyerror ("syntax error: cannot back up"); YYERROR; }      \
while (0)

#define YYTERROR        1
#define YYERRCODE       256

#ifndef YYPURE
#define YYLEX           yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX           yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX           yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX           yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX           yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int     yychar;                 /*  the lookahead symbol                */
YYSTYPE yylval;                 /*  the semantic value of the           */
                                /*  lookahead symbol                    */

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;                 /*  location data for the lookahead     */
                                /*  symbol                              */
#endif

int yynerrs;                    /*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;                    /*  nonzero means print parse trace     */
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks       */

#ifndef YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1                /* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)      __builtin_memcpy(TO,FROM,COUNT)
#else                           /* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif



/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;      /*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;              /*  lookahead token as an internal (translated) token number */

  short yyssa[YYINITDEPTH];     /*  the state stack                     */
  YYSTYPE yyvsa[YYINITDEPTH];   /*  the semantic value stack            */

  short *yyss = yyssa;          /*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;        /*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];   /*  the location stack                  */
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;                /*  the variable used to return         */
                                /*  semantic values from the action     */
                                /*  routines                            */

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;             /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = (short) yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = (int)(yyssp - yyss + 1); // _GD_ cast for 64bit build

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
         the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
         but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
                 &yyss1, size * sizeof (*yyssp),
                 &yyvs1, size * sizeof (*yyvsp),
                 &yyls1, size * sizeof (*yylsp),
                 &yystacksize);
#else
      yyoverflow("parser stack overflow",
                 &yyss1, size * sizeof (*yyssp),
                 &yyvs1, size * sizeof (*yyvsp),
                 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
        {
          yyerror("parser stack overflow");
          return 2;
        }
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
        yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
        fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
        YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
        fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)              /* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;           /* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
        fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
        {
          fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
          /* Give the individual parser a way to print the precise meaning
             of a token, for further debugging info.  */
#ifdef YYPRINT
          YYPRINT (stderr, yychar, yylval);
#endif
          fprintf (stderr, ")\n");
        }
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
               yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
        fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
{
      g_codeTree = yyvsp[0];
    ;
    break;}
case 2:
{
      yyval = yyvsp[0];
    ;
    break;}
case 3:
{
      ATTACH(yyval, yyvsp[-1], yyvsp[0]);
    ;
    break;}
case 4:
{
      yyval = yyvsp[0];
    ;
    break;}
case 5:
{
      yyval = yyvsp[0];
    ;
    break;}
case 6:
{
      yyval = yyvsp[0];
    ;
    break;}
case 7:
{
      yyval = yyvsp[0];
    ;
    break;}
case 8:
{
      yyval = yyvsp[0];
    ;
    break;}
case 9:
{
	  yyval = yyvsp[0];
	;
    break;}
case 10:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_COMPOUND, gmlineno);
    ;
    break;}
case 11:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_COMPOUND, gmlineno);
      yyval->SetChild(0, yyvsp[-1]);
    ;
    break;}
case 12:
{
      gmCodeTreeNode* func = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_FUNCTION, gmlineno);
      func->SetChild(1, yyvsp[0]);
      

      yyval = gmCodeTreeNode::Create(CTNT_DECLARATION, CTNDT_VARIABLE, gmlineno, (int)GMMACHINE_DEFAULT_FUNCTION);
      yyval->SetChild(0, yyvsp[-3]);
      ATTACH(yyval, yyval, CreateOperation(CTNOT_ASSIGN, yyvsp[-3], func));
   ;
    break;}
case 13:
{
      gmCodeTreeNode* func = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_FUNCTION, gmlineno);
      func->SetChild(0, yyvsp[-2]);
      func->SetChild(1, yyvsp[0]);
      

      yyval = gmCodeTreeNode::Create(CTNT_DECLARATION, CTNDT_VARIABLE, gmlineno, (int)GMMACHINE_DEFAULT_FUNCTION);
      yyval->SetChild(0, yyvsp[-4]);
      ATTACH(yyval, yyval, CreateOperation(CTNOT_ASSIGN, yyvsp[-4], func));
   ;
    break;}
case 14:
{
      gmCodeTreeNode* func = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_FUNCTION, gmlineno);
      func->SetChild(1, yyvsp[0]);
      
      ATTACH(yyval, yyval, CreateOperation(CTNOT_ASSIGN, yyvsp[-3], func));
   ;
    break;}
case 15:
{
      gmCodeTreeNode* func = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_FUNCTION, gmlineno);
      func->SetChild(0, yyvsp[-2]);
      func->SetChild(1, yyvsp[0]);
      
      ATTACH(yyval, yyval, CreateOperation(CTNOT_ASSIGN, yyvsp[-4], func));
   ;
    break;}
case 16:
{
      yyval = CreateOperation(CTNOT_DOT, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 17:
{
      yyval = CreateOperation(CTNOT_DOT, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 18:
{
      yyval = gmCodeTreeNode::Create(CTNT_DECLARATION, CTNDT_VARIABLE, gmlineno, (int) yyvsp[-2]);
      yyval->SetChild(0, yyvsp[-1]);
    ;
    break;}
case 19:
{
      yyval = gmCodeTreeNode::Create(CTNT_DECLARATION, CTNDT_VARIABLE, gmlineno, (int) yyvsp[-4]);
      yyval->SetChild(0, yyvsp[-3]);
      ATTACH(yyval, yyval, CreateOperation(CTNOT_ASSIGN, yyvsp[-3], yyvsp[-1]));
    ;
    break;}
case 20:
{
      gmCodeTreeNode* func = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_FUNCTION, gmlineno);
      func->SetChild(1, yyvsp[0]);

      yyval = gmCodeTreeNode::Create(CTNT_DECLARATION, CTNDT_VARIABLE, gmlineno, (int) yyvsp[-5]);
      yyval->SetChild(0, yyvsp[-3]);
      ATTACH(yyval, yyval, CreateOperation(CTNOT_ASSIGN, yyvsp[-3], func));
    ;
    break;}
case 21:
{
      gmCodeTreeNode* func = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_FUNCTION, gmlineno);
      func->SetChild(0, yyvsp[-2]);
      func->SetChild(1, yyvsp[0]);

      yyval = gmCodeTreeNode::Create(CTNT_DECLARATION, CTNDT_VARIABLE, gmlineno, (int) yyvsp[-6]);
      yyval->SetChild(0, yyvsp[-4]);
      ATTACH(yyval, yyval, CreateOperation(CTNOT_ASSIGN, yyvsp[-4], func));
    ;
    break;}
case 22:
{
      yyval = (YYSTYPE) CTVT_LOCAL;
    ;
    break;}
case 23:
{
      yyval = (YYSTYPE) CTVT_GLOBAL;
    ;
    break;}
case 24:
{
      yyval = (YYSTYPE) CTVT_MEMBER;
    ;
    break;}
case 25:
{
      yyval = NULL;
    ;
    break;}
case 26:
{
      yyval = yyvsp[-1];
    ;
    break;}
case 27:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_IF, (yyvsp[-2]) ? yyvsp[-2]->m_lineNumber : gmlineno);
      yyval->SetChild(0, yyvsp[-2]);
      yyval->SetChild(1, yyvsp[0]);
    ;
    break;}
case 28:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_IF, (yyvsp[-4]) ? yyvsp[-4]->m_lineNumber : gmlineno);
      yyval->SetChild(0, yyvsp[-4]);
      yyval->SetChild(1, yyvsp[-2]);
      yyval->SetChild(2, yyvsp[0]);
    ;
    break;}
case 29:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_IF, (yyvsp[-4]) ? yyvsp[-4]->m_lineNumber : gmlineno);
      yyval->SetChild(0, yyvsp[-4]);
      yyval->SetChild(1, yyvsp[-2]);
      yyval->SetChild(2, yyvsp[0]);
    ;
    break;}
case 30:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_FORK, (yyvsp[-1]) ? yyvsp[-1]->m_lineNumber : gmlineno );
      yyval->SetChild(0, yyvsp[0] );
      yyval->SetChild(1, yyvsp[-1] );
    ;
    break;}
case 31:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_FORK, (yyvsp[0]) ? yyvsp[0]->m_lineNumber : gmlineno );
      yyval->SetChild(0, yyvsp[0] );
    ;
    break;}
case 32:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_WHILE, (yyvsp[-2]) ? yyvsp[-2]->m_lineNumber : gmlineno);
      yyval->SetChild(0, yyvsp[-2]);
      yyval->SetChild(1, yyvsp[0]);
    ;
    break;}
case 33:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_DOWHILE, (yyvsp[-2]) ? yyvsp[-2]->m_lineNumber : gmlineno);
      yyval->SetChild(0, yyvsp[-2]);
      yyval->SetChild(1, yyvsp[0]);
    ;
    break;}
case 34:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_FOR, (yyvsp[-3]) ? yyvsp[-3]->m_lineNumber : gmlineno);
      yyval->SetChild(0, yyvsp[-3]);
      yyval->SetChild(1, yyvsp[-2]);
      yyval->SetChild(3, yyvsp[0]);
    ;
    break;}
case 35:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_FOR, (yyvsp[-4]) ? yyvsp[-4]->m_lineNumber : gmlineno);
      yyval->SetChild(0, yyvsp[-4]);
      yyval->SetChild(1, yyvsp[-3]);
      yyval->SetChild(2, yyvsp[-2]);
      yyval->SetChild(3, yyvsp[0]);
    ;
    break;}
case 36:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_FOREACH, (yyvsp[-2]) ? yyvsp[-2]->m_lineNumber : gmlineno);
      yyval->SetChild(0, yyvsp[-2]);
      yyval->SetChild(1, yyvsp[-4]);
      yyval->SetChild(3, yyvsp[0]);
    ;
    break;}
case 37:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_FOREACH, (yyvsp[-2]) ? yyvsp[-2]->m_lineNumber : gmlineno);
      yyval->SetChild(0, yyvsp[-2]);
      yyval->SetChild(1, yyvsp[-4]);
      yyval->SetChild(2, yyvsp[-6]);
      yyval->SetChild(3, yyvsp[0]);
    ;
    break;}
case 38:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_CONTINUE, gmlineno);
    ;
    break;}
case 39:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_BREAK, gmlineno);
    ;
    break;}
case 40:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_RETURN, gmlineno);
    ;
    break;}
case 41:
{
      yyval = gmCodeTreeNode::Create(CTNT_STATEMENT, CTNST_RETURN, gmlineno);
      yyval->SetChild(0, yyvsp[-1]);
    ;
    break;}
case 42:
{
      yyval = yyvsp[0];
      if(yyval)
      {
        yyval->m_flags |= gmCodeTreeNode::CTN_POP;
      }
    ;
    break;}
case 43:
{
      yyval = CreateOperation(CTNOT_ASSIGN, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 44:
{
      yyval = CreateAsignExpression(CTNOT_SHIFT_RIGHT, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 45:
{
      yyval = CreateAsignExpression(CTNOT_SHIFT_LEFT, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 46:
{
      yyval = CreateAsignExpression(CTNOT_ADD, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 47:
{
      yyval = CreateAsignExpression(CTNOT_MINUS, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 48:
{
      yyval = CreateAsignExpression(CTNOT_TIMES, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 49:
{
      yyval = CreateAsignExpression(CTNOT_DIVIDE, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 50:
{
      yyval = CreateAsignExpression(CTNOT_REM, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 51:
{
      yyval = CreateAsignExpression(CTNOT_BIT_AND, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 52:
{
      yyval = CreateAsignExpression(CTNOT_BIT_OR, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 53:
{
      yyval = CreateAsignExpression(CTNOT_BIT_XOR, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 54:
{
      yyval = NULL;
    ;
    break;}
case 55:
{
      yyval = yyvsp[-1];
    ;
    break;}
case 56:
{
      yyval = yyvsp[0];
    ;
    break;}
case 57:
{
      yyval = yyvsp[0];
    ;
    break;}
case 58:
{
      yyval = CreateOperation(CTNOT_OR, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 59:
{
      yyval = yyvsp[0];
    ;
    break;}
case 60:
{
      yyval = CreateOperation(CTNOT_AND, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 61:
{
      yyval = yyvsp[0];
    ;
    break;}
case 62:
{
      yyval = CreateOperation(CTNOT_BIT_OR, yyvsp[-2], yyvsp[0]);
      yyval->ConstantFold();
    ;
    break;}
case 63:
{
      yyval = yyvsp[0];
    ;
    break;}
case 64:
{
      yyval = CreateOperation(CTNOT_BIT_XOR, yyvsp[-2], yyvsp[0]);
      yyval->ConstantFold();
    ;
    break;}
case 65:
{
      yyval = yyvsp[0];
    ;
    break;}
case 66:
{
      yyval = CreateOperation(CTNOT_BIT_AND, yyvsp[-2], yyvsp[0]);
      yyval->ConstantFold();
    ;
    break;}
case 67:
{
      yyval = yyvsp[0];
    ;
    break;}
case 68:
{
      yyval = CreateOperation(CTNOT_EQ, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 69:
{
      yyval = CreateOperation(CTNOT_NEQ, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 70:
{
      yyval = yyvsp[0];
    ;
    break;}
case 71:
{
      yyval = CreateOperation(CTNOT_LT, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 72:
{
      yyval = CreateOperation(CTNOT_GT, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 73:
{
      yyval = CreateOperation(CTNOT_LTE, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 74:
{
      yyval = CreateOperation(CTNOT_GTE, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 75:
{
      yyval = yyvsp[0];
    ;
    break;}
case 76:
{
      yyval = CreateOperation(CTNOT_SHIFT_LEFT, yyvsp[-2], yyvsp[0]);
      yyval->ConstantFold();
    ;
    break;}
case 77:
{
      yyval = CreateOperation(CTNOT_SHIFT_RIGHT, yyvsp[-2], yyvsp[0]);
      yyval->ConstantFold();
    ;
    break;}
case 78:
{
      yyval = yyvsp[0];
    ;
    break;}
case 79:
{
      yyval = CreateOperation(CTNOT_ADD, yyvsp[-2], yyvsp[0]);
      yyval->ConstantFold();
    ;
    break;}
case 80:
{
      yyval = CreateOperation(CTNOT_MINUS, yyvsp[-2], yyvsp[0]);
      yyval->ConstantFold();
    ;
    break;}
case 81:
{
      yyval = yyvsp[0];
    ;
    break;}
case 82:
{
      yyval = CreateOperation(CTNOT_TIMES, yyvsp[-2], yyvsp[0]);
      yyval->ConstantFold();
    ;
    break;}
case 83:
{
      yyval = CreateOperation(CTNOT_DIVIDE, yyvsp[-2], yyvsp[0]);
      yyval->ConstantFold();
    ;
    break;}
case 84:
{
      yyval = CreateOperation(CTNOT_REM, yyvsp[-2], yyvsp[0]);
      yyval->ConstantFold();
    ;
    break;}
case 85:
{
      yyval = yyvsp[0];
    ;
    break;}
case 86:
{
      yyval = yyvsp[-1];
      yyval->SetChild(0, yyvsp[0]);
      yyval->ConstantFold();
    ;
    break;}
case 87:
{
      yyval = CreateOperation(CTNOT_UNARY_PLUS);
    ;
    break;}
case 88:
{
      yyval = CreateOperation(CTNOT_UNARY_MINUS);
    ;
    break;}
case 89:
{
      yyval = CreateOperation(CTNOT_UNARY_COMPLEMENT);
    ;
    break;}
case 90:
{
      yyval = CreateOperation(CTNOT_UNARY_NOT);
    ;
    break;}
case 91:
{
      yyval = yyvsp[0];
    ;
    break;}
case 92:
{
      yyval = CreateOperation(CTNOT_ARRAY_INDEX, yyvsp[-3], yyvsp[-1]);
    ;
    break;}
case 93:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_CALL, gmlineno);
      yyval->SetChild(0, yyvsp[-2]);
    ;
    break;}
case 94:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_CALL, gmlineno);
      yyval->SetChild(0, yyvsp[-3]);
      yyval->SetChild(1, yyvsp[-1]);
    ;
    break;}
case 95:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_CALL, gmlineno);
      yyval->SetChild(0, yyvsp[-2]);
      yyval->SetChild(2, yyvsp[-4]);
    ;
    break;}
case 96:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_CALL, gmlineno);
      yyval->SetChild(0, yyvsp[-3]);
      yyval->SetChild(1, yyvsp[-1]);
      yyval->SetChild(2, yyvsp[-5]);
    ;
    break;}
case 97:
{
      yyval = CreateOperation(CTNOT_DOT, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 98:
{
      yyval = yyvsp[0];
    ;
    break;}
case 99:
{
      ATTACH(yyval, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 100:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_TABLE, gmlineno);
    ;
    break;}
case 101:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_TABLE, gmlineno);
      yyval->SetChild(0, yyvsp[-1]);
    ;
    break;}
case 102:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_TABLE, gmlineno);
    ;
    break;}
case 103:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_TABLE, gmlineno);
      yyval->SetChild(0, yyvsp[-1]);
    ;
    break;}
case 104:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_TABLE, gmlineno);
      yyval->SetChild(0, yyvsp[-2]);
    ;
    break;}
case 105:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_FUNCTION, gmlineno);
      yyval->SetChild(0, yyvsp[-2]);
      yyval->SetChild(1, yyvsp[0]);
    ;
    break;}
case 106:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_FUNCTION, gmlineno);
      yyval->SetChild(1, yyvsp[0]);
    ;
    break;}
case 107:
{
      yyval = yyvsp[0];
    ;
    break;}
case 108:
{
      ATTACH(yyval, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 109:
{
      yyval = yyvsp[0];
    ;
    break;}
case 110:
{
      yyval = CreateOperation(CTNOT_ASSIGN_FIELD, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 111:
{
      yyval = yyvsp[0];
    ;
    break;}
case 112:
{
      ATTACH(yyval, yyvsp[-2], yyvsp[0]);
    ;
    break;}
case 113:
{
      yyval = gmCodeTreeNode::Create(CTNT_DECLARATION, CTNDT_PARAMETER, gmlineno);
      yyval->SetChild(0, yyvsp[0]);
    ;
    break;}
case 114:
{
      yyval = gmCodeTreeNode::Create(CTNT_DECLARATION, CTNDT_PARAMETER, gmlineno);
      yyval->SetChild(0, yyvsp[-2]);
      yyval->SetChild(1, yyvsp[0]);
    ;
    break;}
case 115:
{
      yyval = yyvsp[0];
    ;
    break;}
case 116:
{
      yyval = yyvsp[0];
      yyval->m_flags |= gmCodeTreeNode::CTN_MEMBER;
    ;
    break;}
case 117:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_THIS, gmlineno);
    ;
    break;}
case 118:
{
      yyval = yyvsp[0];
    ;
    break;}
case 119:
{
      yyval = yyvsp[0];
    ;
    break;}
case 120:
{
      yyval = yyvsp[0];
    ;
    break;}
case 121:
{
      yyval = yyvsp[-1];
    ;
    break;}
case 122:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_IDENTIFIER, gmlineno);
      yyval->m_data.m_string = (char *) gmCodeTree::Get().Alloc((int)strlen(gmtext) + 1);
      strcpy(yyval->m_data.m_string, gmtext);
    ;
    break;}
case 123:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_CONSTANT, gmlineno, CTNCT_INT);
      yyval->m_data.m_iValue = strtoul(gmtext + 2, NULL, 16);
    ;
    break;}
case 124:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_CONSTANT, gmlineno, CTNCT_INT);
      yyval->m_data.m_iValue = strtoul(gmtext + 2, NULL, 2);
    ;
    break;}
case 125:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_CONSTANT, gmlineno, CTNCT_INT);
      yyval->m_data.m_iValue = atoi(gmtext);
    ;
    break;}
case 126:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_CONSTANT, gmlineno, CTNCT_INT);
      yyval->m_data.m_iValue = 1;
    ;
    break;}
case 127:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_CONSTANT, gmlineno, CTNCT_INT);
      yyval->m_data.m_iValue = 0;
    ;
    break;}
case 128:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_CONSTANT, gmlineno, CTNCT_INT);

      char * c = (char *) gmCodeTree::Get().Alloc((int)strlen(gmtext) + 1);
      strcpy(c, gmtext);
      int result = 0;
      int shr = 0;

      while(*c)
      {
        if(c[0] == '\'')
        {
          ++c;
          continue;
        }
        else if(c[0] == '\\')
        {
          if(shr) result <<= 8;
          switch(c[1])
          {
            case 'a' : result |= (unsigned char) '\a'; break;
            case 'b' : result |= (unsigned char) '\b'; break;
            case 'f' : result |= (unsigned char) '\f'; break;
            case 'n' : result |= (unsigned char) '\n'; break;
            case 'r' : result |= (unsigned char) '\r'; break;
            case 't' : result |= (unsigned char) '\t'; break;
            case 'v' : result |= (unsigned char) '\v'; break;
            case '\'' : result |= (unsigned char) '\''; break;
            case '\"' : result |= (unsigned char) '\"'; break;
            case '\\' : result |= (unsigned char) '\\'; break;
            default: result |= (unsigned char) c[1];
          }
          ++shr;
          c += 2;
          continue;
        }
        if(shr) result <<= 8;
        result |= (unsigned char) *(c++);
        ++shr;
      }

      if(shr > 4 && gmCodeTree::Get().GetLog()) gmCodeTree::Get().GetLog()->LogEntry("truncated char, line %d", gmlineno);

      yyval->m_data.m_iValue = result;
    ;
    break;}
case 129:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_CONSTANT, gmlineno, CTNCT_FLOAT);
      yyval->m_data.m_fValue = (float) atof(gmtext);
    ;
    break;}
case 130:
{
      yyval = yyvsp[0];
    ;
    break;}
case 131:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_CONSTANT, gmlineno, CTNCT_NULL);
      yyval->m_data.m_iValue = 0;
    ;
    break;}
case 132:
{
      yyval = gmCodeTreeNode::Create(CTNT_EXPRESSION, CTNET_CONSTANT, gmlineno, CTNCT_STRING);
      yyval->m_data.m_string = (char *) gmCodeTree::Get().Alloc((int)strlen(gmtext) + 1);
      strcpy(yyval->m_data.m_string, gmtext);
      if(gmtext[0] == '"')
      {
        gmProcessDoubleQuoteString(yyval->m_data.m_string);
      }
      else if(gmtext[0] == '`')
      {
        gmProcessSingleQuoteString(yyval->m_data.m_string);
      }
    ;
    break;}
case 133:
{
      yyval = yyvsp[-1];
      int alen = (int)strlen(yyval->m_data.m_string);
      int blen = (int)strlen(gmtext);
      char * str = (char *) gmCodeTree::Get().Alloc(alen + blen + 1);
      if(str)
      {
        memcpy(str, yyvsp[-1]->m_data.m_string, alen);
        memcpy(str + alen, gmtext, blen);
        str[alen + blen] = '\0';
        if(str[alen] == '"')
        {
          gmProcessDoubleQuoteString(str + alen);
        }
        else if(str[alen] == '`')
        {
          gmProcessSingleQuoteString(str + alen);
        }
        yyval->m_data.m_string = str;
      }
    ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */


  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
        fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
        {
          int size = 0;
          char *msg;
          int x, count;

          count = 0;
          /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
          for (x = (yyn < 0 ? -yyn : 0);
               x < (int)(sizeof(yytname) / sizeof(char *)); x++) //_GD_
            if (yycheck[x + yyn] == x)
              size += (int)strlen(yytname[x]) + 15, count++; // _GD_ add cast for 64bit build
          //_GD_ msg = (char *) malloc(size + 15);
          msg = GM_NEW( char [size + 15] );
          if (msg != 0)
            {
              strcpy(msg, "parse error");

              if (count < 5)
                {
                  count = 0;
                  for (x = (yyn < 0 ? -yyn : 0);
                       x < (sizeof(yytname) / sizeof(char *)); x++)
                    if (yycheck[x + yyn] == x)
                      {
                        strcat(msg, count == 0 ? ", expecting `" : " or `");
                        strcat(msg, yytname[x]);
                        strcat(msg, "'");
                        count++;
                      }
                }
              yyerror(msg);
              //_GD_ free(msg);
              delete [] msg;
            }
          else
            yyerror ("parse error; also virtual memory exceeded");
        }
      else
#endif /* YYERROR_VERBOSE */
        yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
        YYABORT;

#if YYDEBUG != 0
      if (yydebug)
        fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;              /* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
        fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
        goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}


#include <stdio.h>











