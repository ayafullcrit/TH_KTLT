#include<stdio.h>
int a[4]={0,2,3,5};
int dem=0;
int x[5]={0,0,0,0,0};
int used[4]={0,0,0,0};
void hoan_vi(int i)
{
	int j;
	for(j=0;j<4;j++)
	{
		if(!used[j])
		{
			x[i]=a[j];
			if(!(x[i]==0 && i==1))
			{
				used[j]=1;
				if(i==4)
				{
					dem++;
					int k;
					for(k=1;k<=4;k++)
					printf("%i",x[k]);
					printf("\n");
				}
				else hoan_vi(i+1);
				used[j]=0;
			}
		}
	}
}
void main()
{
	hoan_vi(1);
	printf("%d",dem);
}
