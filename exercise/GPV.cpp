#include <stdio.h
int main()
{
  int n,i=1;
  double GPA,sum1=0,sum2=0,a,b;
  scanf("%d",&n);
  while(i<=n)
  {
    scanf("%lf %lf",&a,&b);
    sum1=sum1+a*b;
    sum2=sum2+a;
    i++;
  }
    GPA=sum1/sum2;
    printf("%.2lf",GPA);
    return 0;
}


