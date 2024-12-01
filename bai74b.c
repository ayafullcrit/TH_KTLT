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

void Hoanvi(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Max(int a[][100], int m, int n) {
    int i, j;
    int max = -1e9;
    int index_max = -1;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                index_max = j;
            }
        }
        Hoanvi(&a[i][index_max], &a[i][i]);
        max = -1e9;
    }
    printf("\nMa tran tro thanh: \n");
    Xuat(a, m, n);
}

int Tong(int a[][100], int m, int n) {
    int i, j;
    int s = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) s += a[i][j];
        }
    }
    return (s);
}

main() {
    int a[100][100];
    int m, n;
    scanf("%d %d", &m, &n);
    if (m <= 0 || n <= 0||m != n) printf("Khong hop le");
    else {
        Nhap(a, m, n);
        Xuat(a, m, n);
        Max (a, m, n);
        printf("\nTong =  %d", Tong(a, m, n));
    }
    getch();
}