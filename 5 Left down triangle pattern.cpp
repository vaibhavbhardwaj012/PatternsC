#include <stdio.h>

int main() {
  int size = 5;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size-i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
