#include <stdio.h>

int main() {
  int a[10], i, min, max;
  for (i = 0; i < 10; i++) {
    printf("\n Enter Interger Value [%d] : ", i + 1);
    scanf("%d", & a[i]);
    if (i == 0) {
      min = max = a[i];
    } else {
      if (min > a[i]) {
        min = a[i];
      }
      if (max < a[i]) {
        max = a[i];
      }
    }
  }
  printf("\n Minimum : %d", min);
  printf("\n Maximum : %d", max);
  return 0;
}
