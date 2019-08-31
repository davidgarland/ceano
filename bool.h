/*
** bool.h | Ceano | Booleans.
** https://github.com/davidgarland/ceano
*/

#include "core.h"

#ifndef CEANO_BOOL_H
#define CEANO_BOOL_H

#define TRUE(A, B) A
#define FALSE(A, B) B

#define NOT(N) N(FALSE, TRUE)

#endif // CEANO_BOOL_H
