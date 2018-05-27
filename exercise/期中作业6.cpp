#include <stdio.h>
int judge(int n){
    int i;
    if (n<2) return 3;
    for (i=2; i*i<=n; i++)
        if (n%i==0) return 0;
    return 1;
}
int main()
{
    int i,j,x=0,y=0,n,a[200],b[200],c[200],t;
    while (!feof(stdin)) 
	{
        scanf("n=%d:",&n);
        for (i=0; i<n; i++) 
		  scanf("%d",&a[i]);
        for (i=0; i<n; i++) 
		{
            if (judge(a[i])==1) 
			{
                b[x]=a[i];
                x++;
			}
            else if (judge(a[i])==0) 
			{
                c[y]=a[i];
                y++;
			}
		}
        for (i=0; i<x; i++)
            for (j=0; j<x-i-1; j++)
                if (b[j]<b[j+1]) 
				{
                    t=b[j];
                    b[j]=b[j+1];
                    b[j+1]=t;
                }
        for (i=0; i<y; i++)
            for (j=0; j<y-i-1; j++)
                if (c[j]>c[j+1]) 
				{
                    t=c[j];
                    c[j]=c[j+1];
                    c[j+1]=t;
                }
        for (i=0; i<y; i++) printf("%5d",c[i]);
        for (i=0; i<x; i++) printf("%5d",b[i]);
        printf("\n");
    }
}

