#include<stdio.h>
int main()
{
    int a[12],b[12];
	int i,j;
	double sum,count;
	sum=0,count=0;
	a[0]=0,b[0]=0;
	for(i=1;i<=12;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<=12;j++)
	{
		b[j]=300+b[j-1]-a[j];
		if(b[j]<0)
		{
			break;
		}
		if(b[j]>=100)
		{
			b[j]=b[j]-(b[j]/100)*100;
			count=count+(b[j]/100)*100;
		}
	}
	   if (j!=13)
    {
        printf("-%d",j);
     } 
     else { 
    sum=count*1.2+b[12];
    printf("%d",sum);
    } 
	return 0;
}
