#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main () {
  int year;
  printf("Enter a year: ");

  while (scanf("%d", &year) == 1)
  {
    if (year == 0) {
      return 0;
    }

    if (year >= 1990 && year <= 2020 ) {
      int answer = 2020 - year;
      printf("Correct %d", answer);
      continue;
    }

    // 

  }

  return 0;
}
