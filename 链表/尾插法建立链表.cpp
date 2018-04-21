#include<stdio.h>
#include<stdlib.h>
struct node
{
	int date;
	struct node *next;
 };
 struct node *creat(){
 	int i,m,a;
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
 
