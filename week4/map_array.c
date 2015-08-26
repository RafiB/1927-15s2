#include <stdio.h>

void mapList(List L, int (*f)(int)) {
  Link curr = L;
  while (curr != NULL) {
    curr->data = f(curr->data);
    curr = curr->next;
  }
}

void mapArray(int *a, int n, int (*f)(int)) {
  int i;
  for (i = 0; i < n; i++) {
    a[i] = (*f)(a[i]);
  }
}

int squared(int x) { return x * x; }
int times_two(int x) { return 2 * x; }

int main() {
  int a[5] = {1,2,3,4,5};
  int i;
  for (i = 0; i < 5; i++) printf("a[%d]: %d\n", i, a[i]);
  printf("\n");
  mapArray(a, 5, times_two);
  for (i = 0; i < 5; i++) printf("a[%d]: %d\n", i, a[i]);
  printf("\n");

  return 0;
}
