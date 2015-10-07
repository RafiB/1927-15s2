#include <stdio.h>

int main(int argc, char **argv) {
  char test = 'b';

  switch (test) { 
    case 'a': printf("hi\n"); 
    case 'b': printf("hi\n"); 
    case 'c': printf("hi\n"); 
  } 

  return 0;
}
