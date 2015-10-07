void drop(List L) {
  if (L == NULL) { // base case
    return;
  }
  // recursive case
  drop(tail(L));
  free(head(L));
  free(L);
}
