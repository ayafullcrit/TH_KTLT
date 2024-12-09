#include<stdio.h>
#include<stdbool.h>
int n;
float f[100][100];
float Det=0;
void Tinh_dinh_thuc(int i,int *x,int *a,bool *used)
{
	int j;
	for(j=0;j<n;j++)
	{
		if(!used[j])
		{
			x[i]=a[j];
			used[j]=1;
			if(i==n-1)
			{
				int k,p,q,N=0;
				float tich=1;
				for(k=0;k<n;k++)
				{
					for(q=k+1;q<n;q++)
					if (x[k]>x[q]) N++;
					tich*=f[a[k]][x[k]];
				}
				if(N%2!=0) Det-=tich;
				else Det+=tich;
			}
			else Tinh_dinh_thuc(i+1,x,a,used);
			used[j]=0;
		}
	}
}
void Xuat()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%0.4f ",f[i][j]);
		}
		printf("\n");
	}
}
main()
{
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%f",&f[i][j]);
		}
	}
	Xuat();
	int a[n],x[n];
	bool used[n];
	for(i=0;i<n;i++) a[i]=i+1;
	Tinh_dinh_thuc(0,x,a,used);
	printf("Dinh thuc cua ma tran = %0.4f",Det);
}
