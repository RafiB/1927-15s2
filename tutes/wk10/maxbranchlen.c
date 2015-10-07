#define MAX(a, b) (a < b ? b : a)

int BSTreeMaxBranchLen(BSTree t) {
  if (t == NULL) return 0;
  /* If t is a leaf, return 0 */
  if (t->left == NULL && t->right == NULL) return 0;
  /* Otherwise find lengths to left and right */
  return 1 + MAX(BSTreeMaxBranchLen(t->left), BSTreeMaxBranchLen(t->right));
}
