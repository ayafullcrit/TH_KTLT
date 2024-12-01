#include <stdio.h>
#include <conio.h>
#include <math.h>

void Nhap(int a[][100], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
        scanf("%d", &a[i][j]);
        }
    }
}

void Xuat(int a[][100], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        printf("\n");
        for (j = 0; j < n; j++) {
            printf("%4d", a[i][j]); 
        }
    }
}

main() {
    int a[100][100];
    int m, n;
    scanf("%d %d", &m, &n);
    if (m <= 0 || n <= 0) printf("Khong hop le");
    else {
    Nhap(a, m, n);
    Xuat(a, m, n);
    }
    getch();
}