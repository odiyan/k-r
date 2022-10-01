#include <stdio.h>

int main(int argc, char **argv) {
  int c, i, j;
  char nchar[96] = {0}; 

  while((c = getchar()) != EOF) {
    if (c < 127 && c > 32) {
      ++nchar[c - 32];
    }
  }
  printf("\n");
  for (i = 0; i < 96; i++) {
    if (nchar[i] != 0) {
      putchar(i+32);
      printf("\t");
      for (j = 0; j < nchar[i]; j++) { 
	putchar('*');
      }
      printf("\n");
    }
  }
  return 0;
}
