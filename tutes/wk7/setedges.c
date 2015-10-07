/* Adjacency matrix */
Edge *edges(Graph g, int *nE) {
  int i, j;
  for (i = 0; i < g->nV; i++) {
    for (j = 0; j < i; j++) {
      if (g->edges[i][j]) {
        (*nE)++;
      }
    }
  }

  Edge *edges = (Edge *)malloc(*nE * sizeof(struct _edge));
  int e = 0;
  for (i = 0; i < g->nV; i++) {
    for (j = 0; j < i; j++) {
      if (g->edges[i][j]) {
        edges[e++] = {j, i}; // loop invariant: j < i
      }
    }
  }

  return edges;
}

/* Adjacency list */
Edge *edges(Graph g, int *nE) {
  int i;
  for (i = 0; i < g->nV; i++) {
    Vertex curr;
    for (curr = g->edges[i]; curr != NULL; curr = curr->next) {
      if (i < curr) (*nE)++;
    }
  }

  Edge *edges = (Edge *)malloc(*nE * sizeof(struct _edge));
  int e = 0;
  for (i = 0; i < g->nV; i++) {
    Vertex curr;
    for (curr = g->edges[i]; curr != NULL; curr = curr->next) {
      if (i < curr) {
        edges[e++] = {i, curr};
      }
    }
  }

  return edges;
}

/* Array of edges */
Edge *edges(Graph g, int *nE) {
  
}
