#include <stdio.h>

int main() {
  int size = 4;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size-i-1; j++) {
      printf(" ");
    }
    for (int k = 0; k < 2*i+1; k++) {
      printf("%d", k+1);
    }
    printf("\n");
  }
  return 0;
}
