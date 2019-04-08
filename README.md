# Ceano

Ceano is a little library for C preprocessor macros.

## Example

```C
#include <ceano.h>

// Check at compile time that S Z + S Z = S S Z.
REFLN(ADD(S(Z), S(Z)), S(S(Z)));

// Check at compile time that S S Z * S S Z = S S S S Z.
REFLN(MUL(S(S(Z)), S(S(Z))), S(S(S(S(Z)))));

int main() {
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
