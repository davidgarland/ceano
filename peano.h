/*
** peano.h | Ceano | Peano naturals.
**
*/

#ifndef CEANO_PEANO_H
#define CEANO_PEANO_H

#include "list.h"
#include "tuple.h"

#define S_(X) (S, OPEN(X))
#define S(X) S_(X)
#define Z (Z)
#define P TAIL

#define ADD__Z() ADD_Z
#define ADD_Z(A, B) B
#define ADD__S() ADD_S
#define ADD_S(A, B) DEFER(CAT(ADD__, SND(A)))()(P(A), S(B))
#define ADD_() ADD_N
#define ADD_N(A, B) DEFER(CAT(ADD__, HEAD(A)))()(A, B)
#define ADD(A, B) EVAL(ADD_N(A, B))

#define MUL__Z() MUL_Z
#define MUL_Z(A, B, C) C
#define MUL__S() MUL_S
#define MUL_S(A, B, C) DEFER(CAT(MUL__, SND(B)))()(A, P(B), OBSTRUCT(ADD_)()(A, C))
#define MUL_() MUL_N
#define MUL_N(A, B) DEFER(CAT(MUL__, HEAD(B)))()(A, B, Z)
#define MUL(A, B) EVAL(MUL_N(A, B))

#define EQ__ZZ() EQ_ZZ
#define EQ_ZZ(A, B) T
#define EQ__SZ() EQ_SZ
#define EQ_SZ(A, B) F
#define EQ__ZS() EQ_ZS
#define EQ_ZS(A, B) F
#define EQ__SS() EQ_SS
#define EQ_SS(A, B) DEFER(CAT(EQ__, CAT(SND(A), SND(B))))()(P(A), P(B))
#define EQ_(A, B) DEFER(CAT(EQ__, CAT(HEAD(A), HEAD(B))))()(A, B)
#define EQ(A, B) EVAL(EQ_(A, B))

#define NTOI__Z() NTOI_Z
#define NTOI_Z(A)
#define NTOI__S() NTOI_S
#define NTOI_S(A) + 1 OBSTRUCT(CAT(NTOI__, SND(A)))()(P(A))
#define NTOI_() NTOI_N
#define NTOI_N(A) (0 DEFER(CAT(NTOI__, SND(S(A)))()(P(S(A)))))
#define NTOI(A) EVAL(NTOI_N(A))

#endif // CEANO_PEANO_H
