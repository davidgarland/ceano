/*
** test.c | Ceano | Test program.
** https://github.com/davidgarlanc/ceano
*/

#include "utils.h"

int main() {
  int x = NTOI(MUL(S(S(S(Z))), S(S(S(S(Z))))));
  if (IN(x, (1, 2, 3, 4, 5, 6, 7, 8, 9))) {
    return 5;
  }
  return 0;
}
