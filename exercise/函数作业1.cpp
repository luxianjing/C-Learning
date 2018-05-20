#include<stdio.h>
#include<string.h>
#define M 100
char huiwen(char a[]) 
{
    int  i,length,m,k=0;
    length=strlen(a);
    m=length/2;
    for(i=0;i<m;i++)
    {
    	if(a[i]!=a[length-i-1])
    	{
    		k++;
		}	
	}
	if(k==0)
	   printf("YES\n");
	else
	   printf("NO\n");
} 
int main()
{
	char a[M];
    scanf("%s",a);
	huiwen(a);
}
