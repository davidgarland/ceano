/*
** test.c | Ceano | Test program.
** https://github.com/davidgarland/ceano
*/

#include "core.h"
#include "proof.h"
#include "math.h"

// Basic proofs.
REFLN(Z, Z);       // Z = Z
REFLN(S(Z), S(Z)); // S Z = S Z

REFLN(Z, P(S(Z))); // Z = P S Z
REFLN(Z, P(Z));    // Z = P Z

// Mathematical proofs.
REFLN(ADD(S(Z), S(Z)), S(S(Z))); // S Z + S Z = S S Z

int main() {
  return 0;
}
