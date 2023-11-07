#include <stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
int main()
{ int choice=1,pos,i=1,count=0;
struct node* head,*newnode,*temp,*new;
head=NULL;
while(choice){
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the node data:");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL){
head=temp=newnode;
}
else{
temp->next=newnode;
temp=newnode;
}
printf("do you want to continue (0,1)");
scanf("%d",&choice);
}
temp=head;
while(temp!=0){
printf("%d\t",temp->data);
temp=temp->next;
count++;
}

printf("\n%d\n",count);
printf("enter the value of pos\n");
scanf("%d",&pos);
if(pos>count)
{
printf("the position is invalid");
}
else{
temp=head;
while(i<pos){
temp=temp->next;
i++;}
new=(struct node*)malloc(sizeof(struct node));
printf("Enter node data:");
scanf("%d",&new->data);
new->next=temp->next;
temp->next=new;
}
temp=head;
while(temp!=0){
printf("%d\t",temp->data);
temp=temp->next;
}
 return 0;
}
