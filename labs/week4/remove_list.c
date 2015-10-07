List removeAll(List L, int old) {
  if (L == NULL) return NULL;
  if (L->data == old) {
    List ret = L->next;
    free(L);
    return removeAll(ret, old);
  }
  L->next = removeAll(L->next, old);
}

List removeAlli(List L, int old) {
  List prev = NULL;
  List curr = L;
  while (curr != NULL) {
    List tmp = curr->next;
    if (curr->value == old) {
      if (prev != NULL) {
        prev->next = curr->next;
      }
      free(curr);
    } else {
      prev = curr;
    }
    curr = tmp;
  }
}
