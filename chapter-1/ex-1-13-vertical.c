/* come back to this later */
#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main(int argc, char **argv) {
  int c = 0, i = 0, nc = 0, nw = 0;
  int state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (nc > 0) {
	for (i = 0; i < nc; i++) {
	  for (i = 0; i < nw; i++) {
	    printf("\t");
	  }
	  printf("*\n");
	}
	for (i = 0; i < nc; i++) {
	  printf("\033[A");
	}
	nc = 0;
	nw++;
      }
    }
    else {
      ++nc;
    }
  }
  return 0;
}
