#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 256 // maximum length of a single word

int main(int argc, char* argv[]) {
  char word[MAX_LEN];

  FILE* fin = fopen( /* TODO: Read from input file */ );

  if(fin == NULL) {
    perror("Could not open input file.");
    return 1;
  }

  // TODO: Write your code here to implement the encryption.

  // clean up gracefully
  fclose(fin);

  return 0;
}
