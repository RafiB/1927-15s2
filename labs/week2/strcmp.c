#include <stdio.h>

int strlen(char *a) {
  int i = 0;
  while (a + i != '\0') i++;
  return i;
}
int strcmp(char *a, char *b) {
  int l1 = strlen(a);
  int l2 = strlen(b);
  int min = l1 < l2 ? l1 : l2;

  int i;
  for (i = 0; i < min; i++) {
    if (a[i] < b[i]) return a[i] - b[i]; // a before b, returns negative
    if (a[i] > b[i]) return a[i] - b[i]; // a after b, returns positive
  }

  if (l1 < l2) return l1 - l2; // l2 has stuff left, l1 doesn't, returns negative
  if (l1 > l2) return l1 - l2; // l1 has stuff left, l2 doesn't, returns positive

  return 0;
}

int main() {
  printf("a vs A, should be > 0: %d\n", strcmp("a", "A"));
  printf("A vs a, should be < 0: %d\n", strcmp("A", "a"));
  printf("jello vs hello, should be > 0: %d\n", strcmp("jello", "hello"));
  printf("a vs zoo, should be < 0: %d\n", strcmp("a", "zoo"));
  return 0;
}
