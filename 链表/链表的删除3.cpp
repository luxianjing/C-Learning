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
 }
 
 void print(struct node *phead){
 	struct node *ptemp;
 	ptemp=phead->next;
 	while(ptemp!=NULL){
 		printf("%d",ptemp->date);
 		ptemp=ptemp->next;
	 }
 }
void deleteNode(struct node *phead,int i)
 {
 	int j;
 	struct node *ptemp,*pre;
 	ptemp=phead->next;
 	pre=phead;
 	for(j=1;j<i;j++)
 	{
 		pre=ptemp;
 		ptemp=ptemp->next ;
	 }
	pre->next =ptemp->next ;
	free(ptemp);

 }
 
 int main()
 {
 	struct node *pHead;
 	pHead=creat(); 
 	deleteNode(pHead,1);
 	print(pHead);
    
    
  } 
 
