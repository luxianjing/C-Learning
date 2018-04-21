#include<stdio.h>
int zhengzhengshu( int M)
{
	int i,n=1,sum=0;
	for(i=1;i<=M;i++)
	{
	   n=n*i;
	   sum=sum+n;	
	} 
	return sum;
} 
int main()
{
    int a,b,i,sum1,sum2;
    float c;
    scanf("%d %d",&a,&b);
    sum1=zhengzhengshu(a);
    sum2=zhengzhengshu(b);
    c=(float)sum1/(float)sum2;
    printf("%d %d\n",sum1,sum2);
    printf("%f",c);  	
}

