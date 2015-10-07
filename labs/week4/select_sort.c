#include <stdio.h>

typedef struct ListNode *Link;
 
typedef struct ListNode {
  int value;  // a List node has an integer value
  Link next;  //  and a Link to the rest of the List
} ListNode;
 
// a List is represented by a pointer to its first node
typedef Link List;
 
#define head(L)  ((L)->value)
#define tail(L)  ((L)->next)
#define empty(L) ((L) == NULL)
#define show(it) {printf("%d",(it));}
List copyList(List ls);

List selectSort(List ls) {
  List my_ls = copyList(ls); 
  List new_ls = NULL;
  List new_ls_tail = NULL;

  /* While my_ls still has stuff in it:
   *  find the smallest thing in my_ls,
   *  add it to new_ls
   */
  while (!empty(my_ls)) {
    Link prev = NULL;
    Link smallest = my_ls;
    Link smallest_prev = NULL;
    Link curr = tail(my_ls);
    while (curr != NULL) {
      if (head(curr) < head(smallest)) {
        smallest = curr;
        smallest_prev = prev;
      }
      prev = curr;
      curr = tail(curr);
    }     

    /* We have found the smallest thing */
    /* Add smallest to new_ls */
    if (new_ls == NULL) new_ls = smallest;
    if (new_ls_tail != NULL) new_ls_tail->next = smallest;

    new_ls_tail = smallest;

    /* Remove smallest from my_ls */
    if (smallest_prev != NULL) {
      tail(smallest_prev) = tail(smallest);
    } else { /* smallest is at beginning of my_ls */
      my_ls = tail(my_ls);
    }
  }

  return my_ls;
}
