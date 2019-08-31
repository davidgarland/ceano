# Ceano

Ceano is a little library for C preprocessor macros.

## Example

```C
#include <stdio.h>
#include <ceano.h>

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
- Church booleans.
