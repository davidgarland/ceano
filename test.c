/*
** test.c | Ceano | Test program.
** https://github.com/davidgarland/ceano
*/

#include <stdio.h>

#include "ceano.h"

// Basic proofs.
REFLN(Z, Z);       // Z = Z
REFLN(S(Z), S(Z)); // S Z = S Z

REFLN(Z, P(S(Z))); // Z = P S Z
REFLN(Z, P(Z));    // Z = P Z

// Mathematical proofs.
REFLN(ADD(S(Z), S(Z)), S(S(Z))); // S Z + S Z = S S Z
REFLN(ADD(S(S(S(Z))), S(Z)), S(S(S(S(Z))))); // S S S Z + S Z = S S S S Z

REFLN(MUL(Z, Z), Z);          // Z * Z = Z
REFLN(MUL(S(Z), Z), Z);       // S Z * Z = Z
REFLN(MUL(S(Z), S(Z)), S(Z)); // S Z * S Z = S Z
REFLN(MUL(S(S(Z)), S(S(Z))), S(S(S(S(Z))))); // S S Z * S S Z = S S S S Z

int main() {
  printf("%i\n", NTOI(MUL(S(S(S(Z))), S(S(S(Z))))));
  return 0;
}
