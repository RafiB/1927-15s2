List copy(List L) {
  if (L == NULL) {
    return NULL;
  }

  List n = newNode(ItemCopy(value(L)));
  tail(n) = copy(tail(L));
  return n;
}
