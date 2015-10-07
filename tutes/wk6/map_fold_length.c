


int ident(int x) { return 1; }

int add(int x, int y) { return x+y; }

int findLength(List L) {
  return fold(map(L, ident), add, 0);
}
