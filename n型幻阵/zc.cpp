#define N 100
#include<stdio.h>
main()
{  
	int a[N][N],i,j,m,b,c,x,y,z;
	printf("输入n型幻阵的行和列的个数:\n");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	   for(j=0;j<m;j++)
		   a[i][j]=0;
	i=0;  j=0;  x=0;  y=1;  b=m;  c=m;  z=1;
	while(a[i][j]==0)
	{
		j--;
		while(j<b-1)
			a[i][++j]=z++;
		while(i<c-1)
			a[++i][j]=z++;
		while(j>x)
            a[i][--j]=z++;
		while(i>y)
            a[--i][j]=z++;
		--b;--c;++x;++y;++j;
	}
	printf("输出此%d阶矩阵n:\n"); 
		for(i=0;i<m;i++)
	{   for(j=0;j<m;j++)
	    printf("%3d",a[i][j]);
	    printf("\n");
    }
}
			
