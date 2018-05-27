#include <stdio.h>
int main(){
    int a[20],n,i,j,t;
    char b[20];
    while (!feof(stdin))
	{
       scanf("n=%d",&n);
       for (i=0; i<n; i++) 
	   {
          scanf("%d",&a[i]);
       }
       gets(b);
       for (i=0; i<n; i++) 
	   {
           for (j=0; j<n-i-1; j++) 
		   {
                if (a[j]<a[j+1]) 
				{
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        for (i=1; i<n; i++) 
		{
            if (i==1)
			{
                printf("%d",a[i-1]);
            }
            if (a[i]==a[i-1]) 
			{
                continue;
            }
            else{
                printf(" %d",a[i]);
            }
        }
        printf("\n");
    }
}

