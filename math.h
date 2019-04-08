/*
** math.h | Ceano | Mathematical operations.
** https://github.com/davidgarland/ceano
*/

#ifndef CEANO_MATH_H
#define CEANO_MATH_H

#include "core.h"
#include "bool.h"

// EQ() tests two peano naturals for equality.

#define EQ__ZZ() EQ_ZZ
#define EQ_ZZ(A, B) T

#define EQ__ZS() EQ_ZS
#define EQ_ZS(A, B) F

#define EQ__SZ() EQ_SZ
#define EQ_SZ(A, B) F

#define EQ__SS() EQ_SS
#define EQ_SS(A, B) DEFER(CAT(EQ__, CAT(H(A), H(B))))()(P(A), P(B))

#define EQ(A, B) EVAL(EQ_SS(A, B))

// ADD() adds two peano naturals.

#define ADD__Z() ADD_Z
#define ADD_Z(A, B) B
#define ADD__S() ADD_S
#define ADD_S(A, B) EVAL(DEFER(CAT(ADD__, N(A)))()(P(A), S(B)))
#define ADD(A, B) EVAL(CAT(ADD_, H(A))(A, B))

#endif /* CEANO_MATH_H */
