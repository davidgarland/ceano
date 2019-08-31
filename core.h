/*
** core.h | Ceano | Core functions.
**
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

// OPEN() de-parenthesizes the argument. This is useful when dealing with
// lists or tuples.

#define OPEN_(...) __VA_ARGS__
#define OPEN(...) OPEN_ __VA_ARGS__

#endif // CEANO_CORE_H
