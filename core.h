/*
** core.h | Ceano | Core definitions.
** https://github.com/davidgarland/ceano
*/

#ifndef CEANO_CORE_H
#define CEANO_CORE_H

// CAT() catenates two tokens.

#define CAT_(A, ...) A ## __VA_ARGS__
#define CAT(...) CAT_(__VA_ARGS__)

// STR() stringizes a token.

#define STR_(...) #__VA_ARGS__
#define STR(...) STR_(__VA_ARGS__)

// DEFER() and OBSTRUCT() allow for recursive macros.
// EXPAND() is essentially a weaker-but-faster EVAL().

#define EMPTY(...)
#define DEFER(...) __VA_ARGS__ EMPTY()
#define OBSTRUCT(...) __VA_ARGS__ DEFER(EMPTY)()
#define EXPAND(...) __VA_ARGS__

// EVAL() expands an expression multiple times to allow for simple recursion.

#define EVAL(...)  EVAL1(EVAL1(EVAL1(__VA_ARGS__)))
#define EVAL1(...) EVAL2(EVAL2(EVAL2(__VA_ARGS__)))
#define EVAL2(...) EVAL3(EVAL3(EVAL3(__VA_ARGS__)))
#define EVAL3(...) EVAL4(EVAL4(EVAL4(__VA_ARGS__)))
#define EVAL4(...) EVAL5(EVAL5(EVAL5(__VA_ARGS__)))
#define EVAL5(...) __VA_ARGS__

// FST() gets the first item in a list.
// SND() gets the second item in a list.
// THD() gets the third item in a list.
// RST() gets the "rest" of the list. (That is, excluding the first item.)

#define FST_(A, ...) A
#define FST(...) FST_(__VA_ARGS__)
#define SND_(A, B, ...) B
#define SND(...) SND_(__VA_ARGS__)
#define THD_(A, B, C, ...) C
#define THD(...) THD_(__VA_ARGS__)
#define RST_(A, ...) __VA_ARGS__
#define RST(...) RST_(__VA_ARGS__)

// O() "opens" an expression; removes 1 layer of parenthesis from its argument.
// The argument *MUST* have at least 1 layer of parens.

#define O__(...) __VA_ARGS__
#define O_(...) O__ __VA_ARGS__
#define O(...) O_(__VA_ARGS__)

// The peano naturals.
// S() is the "successor" of a number.
// Z is the symbol for zero.

#define S(X) (S, X)
#define Z (Z)

// H() obtains the "head" of a peano natural, either S or Z.

#define H(...) FST(O(__VA_ARGS__))

// P() is the "predecessor" of a peano natural.

#define P_Z(...) Z
#define P_S(...) SND(O(__VA_ARGS__))
#define P(...) CAT(P_, H(__VA_ARGS__))(__VA_ARGS__)

// N() is the "next" value of a peano natural, either S or Z.

#define N(...) H(P(__VA_ARGS__))

// NTOI() converts a peano natural to its integer equivalent.

#define NTOI__Z() NTOI_Z
#define NTOI_Z(A)
#define NTOI__S() NTOI_S
#define NTOI_S(A) + 1 OBSTRUCT(CAT(NTOI__, N(A)))()(P(A))
#define NTOI_() NTOI_N
#define NTOI_N(A) (0 DEFER(CAT(NTOI__, N(S(A)))()(P(S(A)))))
#define NTOI(A) EVAL(NTOI_N(A))

#endif /* CEANO_CORE_H */
