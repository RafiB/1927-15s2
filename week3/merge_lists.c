List ListMerge(List L1, List L2) {
  List merged = newList();



  while (L1 != NULL && L2 != NULL) {
    if (L1->data < L2->data) {
      if (merged->size == 0) {
        merged->first = L1;
      } else {
        merged->last->next = L1;
      }
      merged->last = L1;
      L1 = L1->next;
    } else {
      if (merged->size == 0) {
        merged->first = L2;
      } else {
        merged->last->next = L2;
      }
      merged->last = L2;
      L2 = L2->next;
    }
  }

  if (L1 == NULL) {
    merged->last->next = L2;
    merged->last = L2->last;
  }
  if (L2 == NULL) {
    merged->last->next = L1;
    merged->last = L1->last;
  }

  return merged;
}
