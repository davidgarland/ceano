# Ceano

Ceano is a little library for C preprocessor macros.

## Example

```C
#include <stdio.h>
#include <ceano.h>

// Check at compile time that S Z + S Z = S S Z.
REFLN(ADD(S(Z), S(Z)), S(S(Z)));

// Check at compile time that S S Z * S S Z = S S S S Z.
REFLN(MUL(S(S(Z)), S(S(Z))), S(S(S(S(Z)))));

int main() {
  // Calculuate S S S Z * S S S Z, then convert that to an integer and print it.
  // (So it should print 3*3, 9.)
  printf("%i\n", NTOI(MUL(S(S(S(Z))), S(S(S(Z)))))); 
  return 0;
}
```

## Featuring
- ~~Zero-cost abstractions~~
- Tools for designing recursive macros.
- Tools for processing argument lists.
- Peano naturals that may be converted to integers.
- Peano addition and multiplication.
- Church booleans that may be converted to integers.
- Reflective equality checking for simple proofs.
