#include "substitute.h"

#include <stdio.h>
#include <stdlib.h>

int substitute(char *alphabet, char *input_file, char *output_file) {
  printf("Will use the provided alphabet in a substitution cypher on the input file\n");
  printf("Alphabet : %s\n", alphabet);
  printf("Input file: %s\n", input_file);
  printf("Output file: %s\n", output_file);
  return EXIT_SUCCESS;
}
