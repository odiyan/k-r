#include <stdio.h>

int main(int argc, char **argv) {
  int c;
  int blank = 0;

  while ((c = getchar()) != EOF){
    while(c == ' ') {
      c = getchar();
      ++blank;
    }
    if (blank > 0) {
      putchar(' ');
      blank = 0;
    }
    putchar(c);
  }
  return 0;
}
