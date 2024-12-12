#include<stdio.h>
#include<conio.h>
#include<math.h>
  double  tich(float a,unsigned int n){
  double  s=1;
	for(int i=0;i<=n-1;i++){
	s=s*(a+i);
	}
	return s;		
}
 double  tong(float a,unsigned int n){
  double  s=1/a,b=1/a;
	for(int i=1;i<=n;i++){
	b=b*1/(a+i);s+=b;
	}
	return s;		
}
int main(){
	unsigned int n;float a;
	scanf("%f %d",&a,&n);
	printf("%.4lf\n %.4lf",tich(a,n),tong(a,n));
	
	getch();
}
