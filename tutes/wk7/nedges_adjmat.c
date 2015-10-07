



typedef struct GraphRep *Graph;
typedef struct GraphRep {
  int   nV;    // #vertices
  int **edges; // matrix of 0/1 values
};

int nEdges(Graph g) {
  int i;
  int nE = 0;
  for (i = 0; i < g->nV; i++) {
    int j;
    for (j = 0; j < i; j++) {
      if (g->edges[i][j]) nE++;
    }
  }

  return nE;
}
