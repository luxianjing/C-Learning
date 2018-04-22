#include<stdio.h>
#include<stdlib.h>
struct node
{
	int date;
	struct node *next;
 };
 struct node *creat()
 {
 	int i,m;
 	scanf("%d",&m);
 	struct node *phead,*pend,*pnew;
 	phead=pend=(struct node*)malloc(sizeof(struct node));
 	pend->next=NULL;
 	phead=pend;
 	for(i=0;i<m;i++)
 	{
 		
 	    pnew=(struct node*)malloc(sizeof(struct node));
 	    scanf("%d",&pnew->date);
 	    pnew->next=NULL;
 	    pend->next=pnew;
 	    pend=pnew;	   
	 }
	 return phead;
 };
 
 void print(struct node *phead){
 	struct node *ptemp;
 	ptemp=phead->next;
 	while(ptemp!=NULL){
 		printf("%d ",ptemp->date);
 		ptemp=ptemp->next;
	 }
 }
 
  struct node *Insert(struct node *phead)
 {
	int m,x, j;
 	struct node *p,*pnew;
 	p=phead;
 	printf("请输入插入数据的位置:\n");
 	scanf("%d",&j);
 	printf("请输入插入的数据:\n");
 	scanf("%d",&x);
 	for(m=1;m<j;m++)
 	{
 		p=p->next ;
	 }
	pnew=(struct node*)malloc(sizeof(struct node));
	pnew->date =x;
	pnew->next=p->next ;
	p->next =pnew;
	return phead;
 	
 }


 int main()
 {
 	struct node *pHead;
 	int j;
 	pHead=creat();
	pHead=Insert(pHead); 
 	print(pHead);
 } 
 
