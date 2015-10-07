List dropList(List l) {
  if (l == NULL) return NULL;
  dropList(l->next);
  free(l);
  return NULL;
}
