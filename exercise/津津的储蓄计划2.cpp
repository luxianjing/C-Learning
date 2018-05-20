#include<stdio.h>
int main(void)
{
    int a[100],b[100],i,j,k;
    double sum,cun;
    a[0]=0;
    b[0]=0;
    sum=0;
    cun=0;
    for (i=1;i<=12;i++)
    scanf("%d",&a[i]);
    for (j=1;j<=12;j++)
    {
        b[j]=300+b[j-1]-a[j];
        if (b[j]<0)
            break;
        if (b[j]>=100)
        {   cun=cun+100*(b[j]/100);
            
            b[j]=b[j]-100*(b[j]/100);
        }
    
    }

    if (j!=13)
    {
        printf("-%d",j);
     } 
     else {
    sum=1.2*cun+b[12];
    printf("%0.0lf",sum);
}

return 0;

}


