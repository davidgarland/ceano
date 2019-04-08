/*
** bool.h | Ceano | Church Booleans
** https://github.com/davidgarland/ceano
*/

#ifndef CEANO_BOOL_H
#define CEANO_BOOL_H

// T() is the true church boolean function.

#define T_(A, ...) A
#define T(A, ...) T_(A, __VA_ARGS__)

// F() is the false church boolean function.

#define F_(A, ...) __VA_ARGS__
#define F(A, ...) F_(A, __VA_ARGS__)

// NOT() inverts a boolean.

#define NOT(A) A(F, T)

// BTOI() converts a boolean to its integer representation.

#define BTOI(A) A(1, 0)

#endif /* CEANO_BOOL_H */
