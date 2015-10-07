int strcmp(char *a, char *b) {
  int la = strlen(a);
  int lb = strlen(b);
  int min = la > lb ? la : lb;

  int i;
  for (i = 0; i < min; i++)
    if (a[i] != b[i]) return a[i] - b[i];

  return la - lb;
}
