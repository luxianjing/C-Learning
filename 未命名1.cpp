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
		printf("������İ���Ϊ:a[%d][%d]=%d\n", n,m,max);
    else  printf("�������%d���ް���\n",i+1);
	}
}

        
