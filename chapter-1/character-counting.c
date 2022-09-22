#include <stdio.h>

int main(int argc, char **argv){
  long nc;
  while(getchar() != EOF) {
    ++nc;
  }
  printf("%ld\n", nc);
  return 0;
}
