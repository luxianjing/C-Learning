#include<stdio.h>
int area(int x,int y)
{
	int m=0,k=0,n=0;
	  	if(x>y)
	  	{
	  		m++;
		}
		if(x==y)
		{
			n++;
		} 
		if(x<y)
		{
			k++;
		}
	printf("%d %d %d",m,n,k);
}
int main()
{
	int a[10],b[10],i,j;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<10;j++)
	{
		scanf("%d",&b[j]);
	}
	for(j=0;j<10;j++)
	{
		area(a[j],b[j]);
	}
}


