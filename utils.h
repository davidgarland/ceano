/*
** utils.h | Ceano | Practical tools.
** https://github.com/davidgarland/ceano
*/

#ifndef CEANO_UTILS_H
#define CEANO_UTILS_H

#include "peano.h"

#define NARG(...) \
    NARG_(__VA_ARGS__, NARG_SEQ())
#define NARG_(...) \
    ARGN_(__VA_ARGS__)
#define ARGN_( \
   _1,  _2,  _3,  _4,  _5,  _6,  _7,  _8,  _9, _10,  \
  _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
  _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, \
  _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, \
  _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, \
  _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, \
  _61, _62, _63,   N, ...) N
#define NARG_SEQ() \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, S, OPEN(Z)), \
(S, S, S, S, OPEN(Z)), \
(S, S, S, OPEN(Z)), \
(S, S, OPEN(Z)), \
(S, OPEN(Z)), \
OPEN(Z)

#define LENGTH(X) NARG(OPEN(X))

#define IN__Z() IN_Z
#define IN_Z(A, ...)

#define IN__S() IN_S
#define IN_S(A, ...) \
|| (A == HEAD(__VA_ARGS__))\
  DEFER(CAT(IN__, SND(LENGTH(__VA_ARGS__))))()(A, TAIL(__VA_ARGS__))

#define IN(A, ...) \
((A == HEAD(__VA_ARGS__)) \
  EVAL(DEFER(CAT(IN__, SND(LENGTH(__VA_ARGS__))))()(A, TAIL(__VA_ARGS__))) \
)

#endif // CEANO_UTILS_H
