/*
** tuple.h | Ceano | Tuple shorthands, also applicable to lists.
** https://github.com/davidgarland/ceano
*/

#ifndef CEANO_TUPLE_H
#define CEANO_TUPLE_H

#include "core.h"

#define FST__(X, ...) X
#define FST_(...) FST__(__VA_ARGS__)
#define FST(X) FST_(OPEN(X))

#define SND__(X, Y, ...) Y
#define SND_(...) SND__(__VA_ARGS__)
#define SND(X) SND_(OPEN(X))

#define THD__(A, B, C, ...) C
#define THD_(...) THD__(__VA_ARGS__)
#define THD(X) THD_(OPEN(X))

#endif // CEANO_TUPLE_H
