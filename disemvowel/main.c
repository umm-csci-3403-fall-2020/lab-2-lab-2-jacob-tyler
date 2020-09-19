#include <stdio.h>
#include <stdlib.h>

#include "disemvowel.h"

int main(int argc, char *argv[]) {
  char *line;
  char *result;
  size_t size;
  
  size = 100;
  line = (char*) malloc (size + 1);
  printf("Please enter a string. Use can use q to quit: \n");

  while (getline(&line, &size, stdin) > 0 && line[0] != 'q') {
    result = disemvowel(line);
    printf("%s\n", result);
    free(result);
  }

  free(line);
}
