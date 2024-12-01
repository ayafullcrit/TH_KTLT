#include <stdio.h>
#include <conio.h>
#include <math.h>

int Tong(int n) {
    int s = 0;
    do {
        scanf ("%d", &n);
        if (n == 0) break;
        s += n;
    } while (n != 0);
    return (s);
}

main() {
    int n;
    printf("Tong = %d\n", Tong(n));
    getch();
}