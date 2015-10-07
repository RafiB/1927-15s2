#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

char *lollol = malloc(8 * sizeof(char));
memcpy(lollol, "hello", strlen("hello"));

printf("%s\n", lollol);

free(lollol);

return 0;
}
