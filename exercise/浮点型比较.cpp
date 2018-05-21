#define precision 1e-8
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	scanf("%f %f",&a,&b);
	if(fabs(a-b)<precision)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}

