#include <stdio.h>

int main(int argc, char **argv) {
  int blank = 0;
  int tab = 0;
  int newline = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if(c == '\n') {
      ++newline;
    }
    else if (c == '\t') {
      ++tab;
    }
    else if (c == ' ') {
      ++blank;
    }
  }
  printf("blanks: %d\n", blank);
  printf("tabs: %d\n", tab);
  printf("newlines: %d\n", newline);

  return 0;
}
