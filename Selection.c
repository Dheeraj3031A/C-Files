#include <stdio.h>
#include <conio.h>
#include <time.h>

void main() {
  int i, j, loc, n, k, key, a[10], small;
  clock_t begin, end;

  clrscr();
  printf("Selection sort\n");
  printf("\nEnter the size of array: ");
  scanf("%d", &n);
  begin = clock();
  printf("Enter the elements of the array: ");

  for (i = 1; i <= n; i++) {
    scanf("%d", &a[i]);
  }

  printf("\nOriginal list: ");
  for (i = 1; i <= n; i++) {
    printf("%4d", a[i]);
  }
  delay(200);

  for (i = 0; i < n - 1; i++) {
    small = a[i];
    loc = i;
    for (j = i + 1; j < n; j++) {
      if (a[j] < small) {
        small = a[j];
        loc = j;
      }
    }

    // swap the smallest element with the current element
    int temp = a[i];
    a[i] = a[loc];
    a[loc] = temp;
  }

  end = clock();
  printf("\nSorted list: ");
  for (i = 0; i < n; i++) {
    printf("%4d", a[i]);
  }
  printf("\nTime taken is %lf CPU cycles", (end - begin) / CLK_TCK);
  getch();
}
