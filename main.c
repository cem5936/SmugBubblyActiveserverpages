#include <stdio.h>
#include <readline/readline.h>

int main(void) {
  char *name = readline("Christiana: "); 
  printf("Hello, %s!\n",name);
  return 0;
}