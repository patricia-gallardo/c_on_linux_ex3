#include <stdio.h>
#include <stdlib.h>

#include "substitute.h"

int main(int argc, char *argv[]) {

  if (argc != 4) {
    printf("Usage: ./substitution <alphabet> <input file> <output file>\n");
    return EXIT_FAILURE;
  }

  return substitute(argv[1], argv[2], argv[3]);
}