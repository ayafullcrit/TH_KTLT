#include <stdio.h>
#include <conio.h>
#include <math.h>

long gt(long n) {
    long T = 1;
    int i = n;
    for (; i > 0; i-=2) {
      T *= i;
    }
    return (T*pow(-1, n + 1));
}

main() {
    long n;
    scanf("%ld", &n);
    printf("N!!= %ld\n", gt(n));
    getch();
}