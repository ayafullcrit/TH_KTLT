#include <stdio.h>
#include <conio.h>
#include <math.h>

long gt(long n) {
    long T = 1;
    int i = n;
    for (; i > 0; i-=2) {
      T *= i;
    }
    return (T);
}

main() {
    long n;
    scanf("%ld", &n);
    printf("N!!= %ld\n", gt(n));
    getch();
}