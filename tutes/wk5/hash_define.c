#include <stdio.h>
#include <stdlib.h>

#define PLUS_ONE(x) (x + 1)

int main(int argc, char *argv[]) {
  int i = 5;

  printf("%d\n", PLUS_ONE(i) * 2);

  return 0;
}
