#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14

//Ham dung de tinh dien tich
double trapzium(double a, double b, double x) {
 double h, s;
 h = (fabs(b - a)/2)*tan((x*PI)/180);
 s = ((a + b)/2)*h;
 return s;
}

//In ra man hinh
int main() {
  double a, b, x;
  scanf("%lf" "%lf" "%lf", &a, &b, &x);
  if (a <= 0 || b <= 0 || x <= 0 || x >= 90) printf("Khong xac dinh \n");
  else {
  printf("Dien tich hinh thang: %0.2lf\n", trapzium(a, b, x));
  }
  getch();
}