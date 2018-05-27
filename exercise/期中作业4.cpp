#include <stdio.h>
int main(){
    int a[50][50],b[50][50],n,m,i,j,t;
    while (!feof(stdin)) 
	{
        scanf("%d*%d",&m,&n);
        for(i=0;i<m;i++)
		{
            for(j=0;j<n;j++)
			{
                scanf("%d",&a[i][j]);
            }
        }
        for(j=0;j<n/2;j++)
		{
            for(i=0;i<m;i++)
			{
                t=a[i][j];
                a[i][j]=a[i][n-j-1];
                a[i][n-j-1]=t;
            }
        }
        for(i=0;i<n;i++)
		{
            for(j=0;j<m;j++)
			{
                b[i][j]=a[j][i];
            }
        }
        for(i=0;i<n;i++)
		{
            for(j=0;j<m;j++)
			{
                printf("%4d",b[i][j]);
            }
            printf("\n");
        }
    }
}

