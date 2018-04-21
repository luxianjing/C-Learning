#include<stdio.h>
main()
{
	int a[6][6];
	int max,min,i,j,m,n;
	for(i=0;i<6;i++)
		for(j=0;j<6;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<6;i++)
	{
		max=a[i][0];
		for(j=0;j<6;j++)
			if(max<a[i][j])
			{
				max=a[i][j];
				n=i;
				m=j;
			}
	
	min=a[0][m];
	for(j=0;j<6;j++)
		if(min>a[j][m])
		{   min=a[j][m];
		}
	if(max==min)
		printf("此数组的鞍点为:a[%d][%d]=%d\n", n,m,max);
    else  printf("此数组第%d行无鞍点\n",i+1);
	}
}

        
