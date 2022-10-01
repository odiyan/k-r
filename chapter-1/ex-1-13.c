#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main(int argc, char **argv) {
  int c, i, nc = 0;
  int state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      if (nc > 0) {
	for (i = 0; i < nc; i++) {
	  putchar('*');
	}
	printf("\n");
	nc = 0;
      }
    }
    else {
      ++nc;
      state = IN;
    }
  }
  return 0;
}
