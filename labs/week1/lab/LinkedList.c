#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "LinkedList.h"

struct SortedListRep {
  int data;
  SortedList next; // NOTE this is exactly the same as
                   //  struct SortedListRep *next;
};

SortedList newList() {
  SortedList n = malloc(sizeof(struct SortedListRep));
  assert(n != NULL);

  n->data = 0;
  n->next = NULL;

  return n;
}

int ListLength(SortedList l) {
  if (l == NULL) return 0;

  int len;
  /* While we haven't hit the end of the list,
   *  add one to the counter
   */
  for (len = 0; l != NULL; l = l->next) len++;

  return len;
}

int ListDistinct(SortedList l) {
  if (l == NULL) return 0;

  int num_distinct = 0;
  int last_seen = l->data - 1;

  for (; l != NULL; l = l->next) {
    if (l->data != last_seen) {
      num_distinct++;
      last_seen = l->data;
    }
  }

  return num_distinct;
}
