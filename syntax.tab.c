/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntax.y"

#include <stdio.h>
#include <stdlib.h> 
#include "header.h"
int yylex(void);
int yywrap(){
  return 1;
}

int yyerror()
{
  extern int yylineno;
  extern char* yytext;
  printf("\nWARNING(Line : %d): Syntax Error . Character \'%s\'!!!!\n", yylineno,yytext);
  exit(1);
}


#line 90 "syntax.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_begin = 3,                      /* begin  */
  YYSYMBOL_end = 4,                        /* end  */
  YYSYMBOL_FORWARD = 5,                    /* FORWARD  */
  YYSYMBOL_RIGHT = 6,                      /* RIGHT  */
  YYSYMBOL_LEFT = 7,                       /* LEFT  */
  YYSYMBOL_REPEAT = 8,                     /* REPEAT  */
  YYSYMBOL_ELLIPSE = 9,                    /* ELLIPSE  */
  YYSYMBOL_CIRCLE = 10,                    /* CIRCLE  */
  YYSYMBOL_RECT = 11,                      /* RECT  */
  YYSYMBOL_WRITE = 12,                     /* WRITE  */
  YYSYMBOL_URL = 13,                       /* URL  */
  YYSYMBOL_NAME = 14,                      /* NAME  */
  YYSYMBOL_TEXT = 15,                      /* TEXT  */
  YYSYMBOL_VALUE = 16,                     /* VALUE  */
  YYSYMBOL_ICON = 17,                      /* ICON  */
  YYSYMBOL_YELLOW = 18,                    /* YELLOW  */
  YYSYMBOL_BLUE = 19,                      /* BLUE  */
  YYSYMBOL_GREEN = 20,                     /* GREEN  */
  YYSYMBOL_RED = 21,                       /* RED  */
  YYSYMBOL_TRANSPARENT = 22,               /* TRANSPARENT  */
  YYSYMBOL_BLACK = 23,                     /* BLACK  */
  YYSYMBOL_BACKGROUND = 24,                /* BACKGROUND  */
  YYSYMBOL_DEFINECOLOR = 25,               /* DEFINECOLOR  */
  YYSYMBOL_THICKNESS = 26,                 /* THICKNESS  */
  YYSYMBOL_HEXA = 27,                      /* HEXA  */
  YYSYMBOL_DEFFONCTION = 28,               /* DEFFONCTION  */
  YYSYMBOL_USEFONCTION = 29,               /* USEFONCTION  */
  YYSYMBOL_30_ = 30,                       /* '['  */
  YYSYMBOL_31_ = 31,                       /* ']'  */
  YYSYMBOL_32_ = 32,                       /* '('  */
  YYSYMBOL_33_ = 33,                       /* ')'  */
  YYSYMBOL_34_ = 34,                       /* ','  */
  YYSYMBOL_35_ = 35,                       /* '+'  */
  YYSYMBOL_36_ = 36,                       /* '-'  */
  YYSYMBOL_37_ = 37,                       /* '*'  */
  YYSYMBOL_38_ = 38,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_START = 40,                     /* START  */
  YYSYMBOL_PROGRAM = 41,                   /* PROGRAM  */
  YYSYMBOL_INSTRUCTION = 42,               /* INSTRUCTION  */
  YYSYMBOL_FORM = 43,                      /* FORM  */
  YYSYMBOL_BACKGROUNDTYPE = 44,            /* BACKGROUNDTYPE  */
  YYSYMBOL_COLOR = 45,                     /* COLOR  */
  YYSYMBOL_EXPRESSION = 46,                /* EXPRESSION  */
  YYSYMBOL_TERM = 47,                      /* TERM  */
  YYSYMBOL_FACTOR = 48                     /* FACTOR  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   182

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  38
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  99

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      32,    33,    37,    35,    34,    36,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    30,     2,    31,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    46,    50,    55,    59,    63,    67,    71,
      77,    82,    86,    90,    94,    98,   103,   108,   114,   118,
     122,   127,   131,   136,   140,   144,   148,   152,   156,   160,
     165,   169,   173,   178,   182,   186,   191,   195,   199
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "begin", "end",
  "FORWARD", "RIGHT", "LEFT", "REPEAT", "ELLIPSE", "CIRCLE", "RECT",
  "WRITE", "URL", "NAME", "TEXT", "VALUE", "ICON", "YELLOW", "BLUE",
  "GREEN", "RED", "TRANSPARENT", "BLACK", "BACKGROUND", "DEFINECOLOR",
  "THICKNESS", "HEXA", "DEFFONCTION", "USEFONCTION", "'['", "']'", "'('",
  "')'", "','", "'+'", "'-'", "'*'", "'/'", "$accept", "START", "PROGRAM",
  "INSTRUCTION", "FORM", "BACKGROUNDTYPE", "COLOR", "EXPRESSION", "TERM",
  "FACTOR", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
      91,    93,    40,    41,    44,    43,    45,    42,    47
};
#endif

#define YYPACT_NINF (-52)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,   123,    15,   121,   121,   121,   121,    -9,     5,    16,
      32,    42,   -52,   -52,   -52,   -52,   -52,   -52,    37,    56,
     121,    71,    83,    98,   -52,   -52,   -52,   -52,   -52,   121,
     121,   134,   135,   -52,   134,   134,   -22,    35,    35,    35,
      85,    97,    -1,   -52,   134,    93,   118,   -52,   -52,    26,
     -52,   121,   121,   121,   121,   123,   137,   140,   143,   144,
     145,   148,   128,   -52,   147,   149,   -52,   135,   135,   -52,
     -52,    21,   121,   121,   121,   121,   121,   -52,   -52,   151,
     -52,   -52,   120,    30,   132,    78,   103,   123,   121,   -52,
     121,   -52,   -52,    70,   125,   129,   -52,   -52,   -52
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,    24,    23,    27,    28,     0,     0,
       0,     0,     0,     0,     3,    14,    15,     1,    36,     0,
       0,     5,    32,    35,     7,     6,     0,     0,     0,     0,
       0,     0,     0,    29,     8,     0,     0,     2,     4,     0,
      37,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,    38,    30,    31,    33,
      34,     0,     0,     0,     0,     0,     0,    22,    11,     0,
      16,     9,     0,     0,     0,     0,     0,    17,     0,    18,
       0,    12,    13,     0,     0,     0,    10,    20,    19
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -52,   -52,   -51,   -20,   -52,   -52,   -32,    -4,   124,   -19
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    23,    24,    25,    62,    26,    31,    32,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      34,    35,    36,    48,    71,    56,    57,    58,    55,     1,
      63,    50,    61,    51,    52,    27,    44,    12,    13,    14,
      15,    16,    17,    37,    19,    49,     3,     4,     5,     6,
       7,     8,     9,    10,    69,    70,    93,    38,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    39,    21,
      22,    48,    81,    12,    13,    14,    15,    16,    17,    66,
      19,    51,    52,    89,    40,    51,    52,    42,    82,    83,
      84,    85,    86,    48,    41,     3,     4,     5,     6,     7,
       8,     9,    10,    43,    94,    45,    95,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    46,    21,    22,
      59,    96,    47,     3,     4,     5,     6,     7,     8,     9,
      10,    91,    60,    51,    52,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    64,    21,    22,     3,     4,
       5,     6,     7,     8,     9,    10,    92,    28,    51,    52,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      65,    21,    22,    29,    88,    51,    52,    30,    97,    78,
      51,    52,    98,    77,    51,    52,    90,    51,    52,    51,
      52,    72,    53,    54,    73,    67,    68,    74,    75,    76,
      79,    87,    80
};

static const yytype_int8 yycheck[] =
{
       4,     5,     6,    23,    55,    37,    38,    39,    30,     3,
      42,    30,    13,    35,    36,     0,    20,    18,    19,    20,
      21,    22,    23,    32,    25,    29,     5,     6,     7,     8,
       9,    10,    11,    12,    53,    54,    87,    32,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    32,    28,
      29,    71,    31,    18,    19,    20,    21,    22,    23,    33,
      25,    35,    36,    33,    32,    35,    36,    30,    72,    73,
      74,    75,    76,    93,    32,     5,     6,     7,     8,     9,
      10,    11,    12,    27,    88,    14,    90,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    14,    28,    29,
      15,    31,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    33,    15,    35,    36,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    32,    28,    29,     5,     6,
       7,     8,     9,    10,    11,    12,    33,    16,    35,    36,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      32,    28,    29,    32,    34,    35,    36,    36,    33,    31,
      35,    36,    33,    15,    35,    36,    34,    35,    36,    35,
      36,    34,    37,    38,    34,    51,    52,    34,    34,    34,
      33,    30,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    40,     5,     6,     7,     8,     9,    10,    11,
      12,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    28,    29,    41,    42,    43,    45,     0,    16,    32,
      36,    46,    47,    48,    46,    46,    46,    32,    32,    32,
      32,    32,    30,    27,    46,    14,    14,     4,    42,    46,
      48,    35,    36,    37,    38,    30,    45,    45,    45,    15,
      15,    13,    44,    45,    32,    32,    33,    47,    47,    48,
      48,    41,    34,    34,    34,    34,    34,    15,    31,    33,
      33,    31,    46,    46,    46,    46,    46,    30,    34,    33,
      34,    33,    33,    41,    46,    46,    31,    33,    33
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    42,    42,    42,    42,    43,    43,
      43,    44,    44,    45,    45,    45,    45,    45,    45,    45,
      46,    46,    46,    47,    47,    47,    48,    48,    48
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     2,     2,     2,     2,     5,
       7,     4,     6,     6,     1,     1,     4,     0,     6,     8,
       8,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       3,     3,     1,     3,     3,     1,     1,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* START: begin PROGRAM end  */
#line 39 "syntax.y"
{   
    printf("\nBEGIN\n");
    racine = (yyvsp[-1].NODE_TYPE);
    racine=Add_Node(Create_Node(END_TOKEN,0,NULL,NULL,0,0),racine);
    YYACCEPT;
}
#line 1195 "syntax.tab.c"
    break;

  case 3: /* PROGRAM: INSTRUCTION  */
#line 47 "syntax.y"
{
    (yyval.NODE_TYPE) = (yyvsp[0].NODE_TYPE);
}
#line 1203 "syntax.tab.c"
    break;

  case 4: /* PROGRAM: PROGRAM INSTRUCTION  */
#line 51 "syntax.y"
{
    (yyval.NODE_TYPE)  =Add_Node((yyvsp[0].NODE_TYPE), (yyvsp[-1].NODE_TYPE));
}
#line 1211 "syntax.tab.c"
    break;

  case 5: /* INSTRUCTION: FORWARD EXPRESSION  */
#line 56 "syntax.y"
{
    (yyval.NODE_TYPE) = Create_Node(FORWARD_TOKEN, (yyvsp[0].val),NULL, NULL,0,0);
}
#line 1219 "syntax.tab.c"
    break;

  case 6: /* INSTRUCTION: LEFT EXPRESSION  */
#line 60 "syntax.y"
{
    (yyval.NODE_TYPE)= Create_Node(LEFT_TOKEN, (yyvsp[0].val),NULL, NULL,0,0);
}
#line 1227 "syntax.tab.c"
    break;

  case 7: /* INSTRUCTION: RIGHT EXPRESSION  */
#line 64 "syntax.y"
{
    (yyval.NODE_TYPE) = Create_Node(RIGHT_TOKEN, (yyvsp[0].val),NULL, NULL,0,0);
}
#line 1235 "syntax.tab.c"
    break;

  case 8: /* INSTRUCTION: THICKNESS EXPRESSION  */
#line 68 "syntax.y"
{
    (yyval.NODE_TYPE)=Create_Node(THICKNESS_TOKEN,(yyvsp[0].val),NULL,NULL,0,0);
}
#line 1243 "syntax.tab.c"
    break;

  case 9: /* INSTRUCTION: REPEAT EXPRESSION '[' PROGRAM ']'  */
#line 72 "syntax.y"
{
    NODE *rpt = Create_Node(REPEAT_TOKEN, (yyvsp[-3].val),NULL, NULL,0,0);
    (yyval.NODE_TYPE) = Add_Program_Node((yyvsp[-1].NODE_TYPE), rpt);
}
#line 1252 "syntax.tab.c"
    break;

  case 10: /* INSTRUCTION: DEFFONCTION NAME '(' ')' '[' PROGRAM ']'  */
#line 78 "syntax.y"
{
    NODE *fct = Create_Node(DEFFONCTION_TOKEN, 0,(yyvsp[-5].text), NULL,0,0);
    (yyval.NODE_TYPE) = Add_Program_Node((yyvsp[-1].NODE_TYPE), fct);
}
#line 1261 "syntax.tab.c"
    break;

  case 11: /* INSTRUCTION: BACKGROUND '[' BACKGROUNDTYPE ']'  */
#line 83 "syntax.y"
{
    (yyval.NODE_TYPE)=Create_Node(BACKGROUND_TOKEN,0,NULL,(yyvsp[-1].NODE_TYPE),0,0);
}
#line 1269 "syntax.tab.c"
    break;

  case 12: /* INSTRUCTION: WRITE '(' TEXT ',' EXPRESSION ')'  */
#line 87 "syntax.y"
{
    (yyval.NODE_TYPE)=Create_Node(WRITE_TOKEN,(yyvsp[-1].val),(yyvsp[-3].text),NULL,0,0);
}
#line 1277 "syntax.tab.c"
    break;

  case 13: /* INSTRUCTION: ICON '(' TEXT ',' EXPRESSION ')'  */
#line 91 "syntax.y"
{
    (yyval.NODE_TYPE)=Create_Node(ICON_TOKEN,(yyvsp[-1].val),(yyvsp[-3].text),NULL,0,0);
}
#line 1285 "syntax.tab.c"
    break;

  case 14: /* INSTRUCTION: FORM  */
#line 95 "syntax.y"
{
 (yyval.NODE_TYPE)=(yyvsp[0].NODE_TYPE);
}
#line 1293 "syntax.tab.c"
    break;

  case 15: /* INSTRUCTION: COLOR  */
#line 99 "syntax.y"
{
    (yyval.NODE_TYPE)=(yyvsp[0].NODE_TYPE);
}
#line 1301 "syntax.tab.c"
    break;

  case 16: /* INSTRUCTION: USEFONCTION NAME '(' ')'  */
#line 104 "syntax.y"
{
    (yyval.NODE_TYPE) = Create_Node(USEFONCTION_TOKEN, 0,(yyvsp[-2].text), NULL,0,0);
}
#line 1309 "syntax.tab.c"
    break;

  case 17: /* INSTRUCTION: %empty  */
#line 109 "syntax.y"
{
    (yyval.NODE_TYPE) = NULL;
    printf("\n");
}
#line 1318 "syntax.tab.c"
    break;

  case 18: /* FORM: CIRCLE '(' COLOR ',' EXPRESSION ')'  */
#line 115 "syntax.y"
{
    (yyval.NODE_TYPE)=Create_Node(CIRCLE_TOKEN,(yyvsp[-1].val),NULL,(yyvsp[-3].NODE_TYPE),0,0);
}
#line 1326 "syntax.tab.c"
    break;

  case 19: /* FORM: RECT '(' COLOR ',' EXPRESSION ',' EXPRESSION ')'  */
#line 119 "syntax.y"
{
  (yyval.NODE_TYPE)=Create_Node(RECT_TOKEN,0,NULL,(yyvsp[-5].NODE_TYPE),(yyvsp[-3].val),(yyvsp[-1].val));
}
#line 1334 "syntax.tab.c"
    break;

  case 20: /* FORM: ELLIPSE '(' COLOR ',' EXPRESSION ',' EXPRESSION ')'  */
#line 123 "syntax.y"
{
    (yyval.NODE_TYPE)=Create_Node(ELLIPSE_TOKEN,0,NULL,(yyvsp[-5].NODE_TYPE),(yyvsp[-3].val),(yyvsp[-1].val));
}
#line 1342 "syntax.tab.c"
    break;

  case 21: /* BACKGROUNDTYPE: COLOR  */
#line 128 "syntax.y"
{
    (yyval.NODE_TYPE)=(yyvsp[0].NODE_TYPE);
}
#line 1350 "syntax.tab.c"
    break;

  case 22: /* BACKGROUNDTYPE: URL TEXT  */
#line 132 "syntax.y"
{
    (yyval.NODE_TYPE)=Create_Node(URL_TOKEN,0,(yyvsp[0].text),NULL,0,0);
}
#line 1358 "syntax.tab.c"
    break;

  case 23: /* COLOR: RED  */
#line 137 "syntax.y"
{
    (yyval.NODE_TYPE) = Create_Node(RED_TOKEN, 0,NULL, NULL,0,0);
}
#line 1366 "syntax.tab.c"
    break;

  case 24: /* COLOR: GREEN  */
#line 141 "syntax.y"
{
    (yyval.NODE_TYPE) = Create_Node(GREEN_TOKEN, 0,NULL, NULL,0,0);
}
#line 1374 "syntax.tab.c"
    break;

  case 25: /* COLOR: YELLOW  */
#line 145 "syntax.y"
{
    (yyval.NODE_TYPE)=Create_Node(YELLOW_TOKEN, 0,NULL, NULL,0,0);
}
#line 1382 "syntax.tab.c"
    break;

  case 26: /* COLOR: BLUE  */
#line 149 "syntax.y"
{
    (yyval.NODE_TYPE) = Create_Node(BLUE_TOKEN, 0,NULL, NULL,0,0);
}
#line 1390 "syntax.tab.c"
    break;

  case 27: /* COLOR: TRANSPARENT  */
#line 153 "syntax.y"
{
    (yyval.NODE_TYPE) = Create_Node(TRANSPARENT_TOKEN, 0,NULL, NULL,0,0);
}
#line 1398 "syntax.tab.c"
    break;

  case 28: /* COLOR: BLACK  */
#line 157 "syntax.y"
{
    (yyval.NODE_TYPE) = Create_Node(BLACK_TOKEN, 0,NULL, NULL,0,0);
}
#line 1406 "syntax.tab.c"
    break;

  case 29: /* COLOR: DEFINECOLOR HEXA  */
#line 161 "syntax.y"
{
    (yyval.NODE_TYPE) = Create_Node(DEFINECOLOR_TOKEN, (yyvsp[0].val),NULL, NULL,0,0);
}
#line 1414 "syntax.tab.c"
    break;

  case 30: /* EXPRESSION: EXPRESSION '+' TERM  */
#line 166 "syntax.y"
{
    (yyval.val) = (yyvsp[-2].val) + (yyvsp[0].val);
}
#line 1422 "syntax.tab.c"
    break;

  case 31: /* EXPRESSION: EXPRESSION '-' TERM  */
#line 170 "syntax.y"
{
    (yyval.val) = (yyvsp[-2].val) - (yyvsp[0].val);
}
#line 1430 "syntax.tab.c"
    break;

  case 32: /* EXPRESSION: TERM  */
#line 174 "syntax.y"
{
    (yyval.val) = (yyvsp[0].val);
}
#line 1438 "syntax.tab.c"
    break;

  case 33: /* TERM: TERM '*' FACTOR  */
#line 179 "syntax.y"
{
    (yyval.val) = (yyvsp[-2].val) * (yyvsp[0].val);
}
#line 1446 "syntax.tab.c"
    break;

  case 34: /* TERM: TERM '/' FACTOR  */
#line 183 "syntax.y"
{
    (yyval.val) = (yyvsp[-2].val) / (yyvsp[0].val);
}
#line 1454 "syntax.tab.c"
    break;

  case 35: /* TERM: FACTOR  */
#line 187 "syntax.y"
{
    (yyval.val) = (yyvsp[0].val);
}
#line 1462 "syntax.tab.c"
    break;

  case 36: /* FACTOR: VALUE  */
#line 192 "syntax.y"
{
    (yyval.val) = (yyvsp[0].val);
}
#line 1470 "syntax.tab.c"
    break;

  case 37: /* FACTOR: '-' FACTOR  */
#line 196 "syntax.y"
{
    (yyval.val) = -(yyvsp[0].val);
}
#line 1478 "syntax.tab.c"
    break;

  case 38: /* FACTOR: '(' EXPRESSION ')'  */
#line 200 "syntax.y"
{
    (yyval.val) = (yyvsp[-1].val);
}
#line 1486 "syntax.tab.c"
    break;


#line 1490 "syntax.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 204 "syntax.y"


int main(){

	yyparse();
	int a=0;
	Print_Prog(racine, &a); 
	Draw_Code(racine);
	Free_All(racine);

    printf("******************\n");
    
	return 0;
}
