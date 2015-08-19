/*
  Using the definition of Word (32-bit unsigned quantity) from lectures:

  typedef unsigned int Word;
  // which on most systems could more accurately be defined as ...
  typedef uint32_t Word;

  Write a function showBits(w) that displays the individual bits in Word w on
  the standard output. Display the bits left-to-right from bit 31 down to bit
  0.
*/

#include <stdio.h>

void showBits(unsigned int w) {
  int i;
  for (i = 31; i >= 0; i--)
    printf("%d", (w >> i) & 1);
  printf("\n");
}

int main() {
  showBits(1);
  showBits(2);
  showBits(3);
  showBits(100);
  showBits(123421);

  return 0;
}
