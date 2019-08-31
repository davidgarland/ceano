/*
** list.h | Ceano | List tools.
*/

#ifndef CEANO_LIST_H
#define CEANO_LIST_H

#include "core.h"

// CONS constructs a list.
// LIST(...) constructs a list from a literal simply.

#define LIST(...) (__VA_ARGS__, OPEN(NIL))
#define CONS(X, XS) (X, OPEN(XS))
#define NIL (NIL)

// HEAD yields the head of the list.

#define HEAD__(X, ...) X
#define HEAD_(...) HEAD__(__VA_ARGS__)
#define HEAD(X) HEAD_(OPEN(X))

// TAIL yields the tail of the list.

#define TAIL__(X, ...) __VA_ARGS__
#define TAIL_(...) TAIL__(__VA_ARGS__)
#define TAIL(X) (TAIL_(OPEN(X)))

#endif // CEANO_CORE_H
