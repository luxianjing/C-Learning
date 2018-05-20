#include<stdio.h>
int main()
{
	int n,a[100],i,j,t;
	int change=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n&&change;i++)
	{
		change=0;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1]; 
				a[j+1]=t;
				change=1;
			}
		}
	}
	printf("%d %d ",a[0],a[n-1]);
	return 0;	
} 
