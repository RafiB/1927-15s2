#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

char *my_string = "this is a string!\n";

char *new_string = malloc(sizeof(char) * strlen("this is a string!\n"));

strcpy(new_string, my_string);

printf("Copied %s, now have %s\n", my_string, new_string);

return 0;
}
