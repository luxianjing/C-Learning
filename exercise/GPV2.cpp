#include<stdio.h>
int main()
{
	double a[200][2];
	double sum1=0,sum2=0,GPV;
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%lf",&a[i][j]);
		}
	}
		for(i=0;i<n;i++)
	{
			sum1=sum1+a[i][0]*a[i][1];
			sum2=sum2+a[i][0];
	}	
		GPV=sum1/sum2;
		printf("%lf",GPV);
} 
