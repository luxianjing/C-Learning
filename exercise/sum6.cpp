#include<stdio.h>
int main()
{
	int a[200],i,sum=0;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
}
