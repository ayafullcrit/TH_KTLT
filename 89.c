#include<stdio.h>
#include<math.h>
void TinhTong(int a[],int b[],int LengthA,int LengthB)
{
	int i,L=LengthA;
	if(LengthA<LengthB)
	{
		L=LengthB;
		int d=LengthB-LengthA;
		for(i=0;i<LengthA;i++)
		{
			int CurIndex=LengthB-1-i;
			a[CurIndex]=a[CurIndex-d];
		}
		for(i=0;i<d;i++) a[i]=0;
	}
	else if(LengthB<LengthA)
	{
		int d=LengthA-LengthB;
		for(i=0;i<LengthB;i++)
		{
			int CurIndex=LengthA-1-i;
			b[CurIndex]=b[CurIndex-d];
		}
		for(i=0;i<d;i++) b[i]=0;
	}
	int result[1001];
	for(i=0;i<L;i++) result[i]=0;
	for(i=L-1;i>=0;i--)
	{
		int mod=result[i]+a[i]+b[i];
		result[i+1]+=mod%10;
		if(result[i+1]>=10) {
			result[i+1]=0;
			result[i]++;
		}
		if(mod>=10) result[i]++;
	}
	for(i=0;i<=L;i++) {
		if( (i==0 && result[i]!=0) || i!=0)
		printf("%d",result[i]);
	}
	printf("\n");
}
void TinhHieu(int a[],int b[],int LengthA,int LengthB)
{
	char sign='+';
	int i,L=LengthA;
	if(LengthA<LengthB)
	{
		L=LengthB;
		int d=LengthB-LengthA;
		for(i=0;i<LengthA;i++)
		{
			int CurIndex=LengthB-1-i;
			a[CurIndex]=a[CurIndex-d];
		}
		for(i=0;i<d;i++) a[i]=0;
	}
	else if(LengthB<LengthA)
	{
		int d=LengthA-LengthB;
		for(i=0;i<LengthB;i++)
		{
			int CurIndex=LengthA-1-i;
			b[CurIndex]=b[CurIndex-d];
		}
		for(i=0;i<d;i++) b[i]=0;
	}
	int IsGreater=1;
	for(i=0;i<L;i++) 
	{
		if(a[i]==b[i]) continue;
		else{
			if(a[i]<b[i]) IsGreater=0;
			break;
		}
	}	
	if(!IsGreater)
	{
		sign='-';
		int* temp=a;
		a=b;
		b=temp;
	}
	int result[1001],carry=0;
	for(i=L-1;i>=0;i--)
	{
		int upper=a[i],lower=b[i]+carry;
		if(upper<lower)
		{
			upper+=10;
			carry=1;
		}
		else carry=0;
		result[i]=upper-lower;
	}
	if(sign=='-') printf("%c",sign);
	for(i=0;i<L;i++) printf("%d",result[i]);
	printf("\n");
}
void main()
{
	int a[1001];
	int b[1001];
	int LengthA=0,LengthB=0;
	printf("Nhap so a:");
	while(1)
	{
		char c;
		scanf("%c",&c);
		if(c!='\n')
		{
		a[LengthA]=(c-'0');
		LengthA++;
		}
		else break;
	}
	printf("Nhap so b:");
	while(1)
	{
		char c;
		scanf("%c",&c);
		if(c!='\n')
		{
			b[LengthB]=(c-'0');
			LengthB++;
		}
		else break;
	}
	printf("a+b=");
	TinhTong(a,b,LengthA,LengthB);
	printf("a-b=");
	TinhHieu(a,b,LengthA,LengthB);
}
