#include<stdio.h>
int sushu(int M)
{
   int m,n,flag;
   printf("素数是:\n");
   for(m=2;m<M;m++)
   {
      flag=1;
	  for(n=2;n<m;n++)
	  {
		  if(m%n==0)
		  {
		     flag=0;
			 break;
		  }
	  }
	   if(flag==1)
			  printf(" %d",m);
   }
}
int wanquansushu( int Z)
{
	int m,n,flag,d,c;
	printf("绝对素数是:\n");
	for(m=2;m<Z;m++)
   {
      flag=1;
	  for(n=2;n<m;n++)
	  {
		  if(m%n==0)
		  {
		     flag=0;
			 break;
		  }
		 
	  }
	   if(flag==1)
	   {
	   	if(m>0&&m<10)  d=m;
		 if(m>=10&&m<100) d=m/10+m%10*10;
		 if(m>=100&&m<1000) d=m/100+m/10%10*10+m%10*100;
		 if(m>=1000&&m<10000) d=m/1000+m/100%10*10+m/10%10*100+m%10*1000;
		c=d/2;
		flag==1; 
 		for(n=2;n<=c;n++)
 		{
 			if(d%n==0) 
			 {
			 flag=0;
			 break ;
			 }
		 }
		if(flag==1) printf("%d ",m); 
	 }
   }
   printf("\n");
}
int shuixianhuashu(int N)
{
	int i,j,k,l;
   printf("水仙花数是:\n");
   for(i=0;i<N;i++)
   {
     j=i/100;
	 k=i/10%10;
	 l=i%10;
	 if(i==j*j*j+k*k*k+l*l*l)
        printf("%-5d",i);
   } 
}
int wanquanshu(int  A)
{
   int a,b,c;
   printf("完全数是:\n");
   for(a=0;a<A;a++)
   {
     c=0;
	 for(b=1;b<=a/2;b++)
	 {
	   if(a%b==0)
		   c+=b;
	 }
      if(a==c)
		 printf("%d ",a);
   }  
}
int humanshu(int B)
{
	int i,j,a,b,sum1=0,sum2=0;
	printf("互满数是:");
	for(i=0;i<B;i++)
	{
		sum1=0,sum2=0;
	  for(a=1;a<i;a++)
	  {
	     if(i%a==0)
	   sum1 =sum1+a;
	  }
	  	for(b=1;b<sum1;b++)
	  {
	     if(sum1%b==0)
	    sum2=sum2+b;
	  }	
	  if(i==sum2)
	  {
	  	printf("%d %d\n",i,sum2);
	  }	
	}	
}
int main()
{
  int M,N,A,Z,B,m,i,a;
  scanf("%d",&M);
  scanf("%d",&Z);
  scanf("%d",&N);
  scanf("%d",&A);
  scanf("%d",&B);
   sushu(M);
   printf("\n");
   wanquansushu(Z);
   printf("\n");
  shuixianhuashu(N);
  printf("\n");
  wanquanshu(A);
  printf("\n");
  humanshu(B);
  printf("\n");
}





