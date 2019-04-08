/*
** proof.h | Ceano | Proof-solving tools.
** https://github.com/davidgarland/ceano
*/

#ifndef CEANO_PROOF_H
#define CEANO_PROOF_H

#include "core.h"

// REFL() tests two tokens for equality. If not equal, it's a compile error.
// Only works on Clang. GCC treats __builtin_strcmp as not being compile-time.

#define REFL_(A, ...) _Static_assert(!__builtin_strcmp(STR(A), STR(__VA_ARGS__)), "REFL failed.")
#define REFL(...) REFL_(__VA_ARGS__)

// REFLN() tests two naturals for equality. If not equal, it's a compile error.

#define REFLN(A, ...) _Static_assert(BTOI(EQ(A, __VA_ARGS__)), "REFLN failed.") 

#endif /* CEANO_PROOF_H */
