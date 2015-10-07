#include <assert.h>

typedef int Vertex;

typedef struct pq {
   int maxI;      // total size of item[] array
   int nI;        // number of values stored in item[] array
   Vertex *item;  // array of vertices currently in queue
   int    *prio;  // reference to array of priority values
                  // lower value gives higher priority
} *PQueue;

// insert vertex v into priority queue pq
// no effect if v is already in the queue
void join(PQueue pq, Vertex v) {
  assert(pq->nI < pq->maxI);

  int i;
  for (i = 0; i < pq->nI; i++)
    if (pq->item[i] == v) return;

  pq->item[pq->nI++] = v;
}
 
// remove the highest priority vertex from pq
// remember: highest priority = lowest dist[v]
// returns the removed vertex
Vertex leave(PQueue pq) {
  int i;
  int loc;
  Vertex ret = pq->item[0];
  for (i = 0; i < pq->nI; i++)
    if (pq->prio[pq->item[i]] < pq->prio[ret]) {
      ret = pq->item[i];
      loc = i;
    }

  for ( ; loc < pq->nI - 1; loc++) {
    pq->item[loc] = pq->item[loc+1];
  }

  return ret;
}
