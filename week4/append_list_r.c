List append(List l, int i) {
  if (l == NULL) return newNode(i);
  l->next = append(l->next, i);
  return l;
}
