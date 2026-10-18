#include <stdio.h>

// Compile and run (using C18 version):
// gcc -Wall -Wextra -std=c18 -pedantic main.c && ./a.out

int main(void) {
  char name[255];
  printf("What's your name? ");
  scanf("%s", name);

  printf("Hello, %s!\n", name);
}
