#include<stdio.h>
#include<math.h>
void main()
{
    float *a,*b,*c;
    a=(float*)malloc(sizeof(float));
    b=(float*)malloc(sizeof(float));
    c=(float*)malloc(sizeof(float));
    printf("Nhap cac he so cua pt bac 2:");
    scanf("%f %f %f",a,b,c);
    if(*a==0)
    {
    	if(*b==0)
    	{
    		if(*c!=0) printf("Phuong trinh vo nghiem");
    		else printf("Phuong trinh co vo so nghiem");
		}
		else printf("Phuong trinh co nghiem:%0.4f",-(*c)/(*b));
	}
	else
	{
		float delta=(*b)*(*b)-4*(*a)*(*c);
		if(delta<0)
		{
			printf("Phuong trinh vo nghiem");
		}
		else if(delta==0)
		{
			printf("Phuong trinh co nghiem kep: x=%0.4f",-(*b)/(2*(*a)));
		}
		else {
			printf("Phuong trinh co hai nghiem: \nx1=%0.4f \nx2=%0.4f",(-(*b)+sqrt(delta))/(2*(*a)),(-(*b)-sqrt(delta))/(2*(*a)));
		}
	}
}
