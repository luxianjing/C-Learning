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
 	struct node *phead,*p1,*pnew;
 	phead=(struct node*)malloc(sizeof(struct node));
    phead->next=NULL;
    p1=phead->next;
 	for(i=0;i<m;i++)
 	{
 		
 	    pnew=(struct node*)malloc(sizeof(struct node));
 	    scanf("%d",&pnew->date);
 	    pnew->next=p1;
 	    phead->next=pnew;
 	    p1=pnew;
 	    
 	    
	 }
	 return phead;
 };
 
 void print(struct node *phead){
 	struct node *ptemp;
 	ptemp=phead->next;
 	while(ptemp!=NULL){
 		printf("%d",ptemp->date);
 		ptemp=ptemp->next;
	 }
 }
 
 int main()
 {
 	struct node *pHead;
 	pHead=creat(); 
 	print(pHead);
    
    
  } 
 
