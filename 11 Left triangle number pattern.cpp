#include <stdio.h>

int main() {

  int size = 9;

  for (int i = 0; i < size; i++) {
    
    for (int j = 0; j <= i; j++) {
      printf("%d", (j+1));
    }
    printf("\n");
  }
  return 0;
}
