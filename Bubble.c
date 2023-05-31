#include <stdio.h>
#include <time.h>

void bubble_sort(int a[], int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

void main() {
  int i, j, loc, n, k, key, a[10];
  clock_t begin, end;

  clrscr();
  printf("\n Bubble sort\n");
  printf("Enter the size of array: ");
  scanf("%d", &n);
  begin = clock();
  for (i = 1; i <= n; i++) {
    scanf("%d", &a[i]);
  }

  printf("\nOriginal list: ");
  for (i = 1; i <= n; i++) {
    printf("%4d", a[i]);
  }

  delay(200);
  bubble_sort(a, n);

  printf("\nSorted list: ");
  for (i = 1; i <= n; i++) {
    printf("%4d", a[i]);
  }

  getch();
  printf("\n\nTime taken is %lf CPU cycles\n", (end - begin) / CLK_TCK);
}
