#include<stdio.h>
int main()
{
	int x=2;
	int *a=&x;
	sizeof(a);
	printf("%p\n",a);
	printf("%p",&x);
}
