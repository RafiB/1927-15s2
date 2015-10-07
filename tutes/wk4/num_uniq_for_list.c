typedef struct BagRep *Bag;

typedef struct Node {
   int value;
   struct Node *next;
} Node;

typedef struct BagRep {
   Node *list;
} BagRep;


int BagNumUniq(BagRep bag) {
  // Find max
  // Add to counters
  // Count the non-zero counters
  if (counters[curr->val] == 0) {
    num_uniq++;
    counters[curr->val] = 1;
  }
}
