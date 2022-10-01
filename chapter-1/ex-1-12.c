#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main(int argc, char **argv) {
  int c, nl, nw, nc, state;
  state = OUT;
  while ((c = getchar()) != EOF) {
      if (c == ' ' || c == '\n' || c == '\t') {
	if (state == IN) { // don't print newline for consecutive blank, newline, tab characters
	  printf("\n"); 
	}
	state = OUT;
      }
      else {
	if (state == OUT) {
	  state = IN;
	}
	putchar(c);
      }
  }
  return 0;
}
