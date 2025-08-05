#include <stdio.h>

int main() {
  int n, i, j;
  long hasil;


  n = 5;

  for (i = 0; j < n; i++) {
    hasil = 1;
    for (j = 0; j<= i; j++) {

      printf("%d ", hasil);

      hasil = hasil * (i - j) / (j + 1);
    }
    printf("\n");

  }
  return 0;
}