#include <stdio.h>
#include<stdlib.h>
int main()
{ int choice=1;
struct node{
int data;
struct node* next;
};
struct node* head,*newnode,*temp,*new;
head=0;
while(choice){
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the node data:");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0){
head=temp=newnode;
}
else{
temp->next=newnode;
temp=newnode;
}
printf("do you want to continue (0,1)");
scanf("%d",&choice);
}
new=(struct node*)malloc(sizeof(struct node));
printf("enter the new node data");
scanf("%d",&new->data);
new->next=0;
while(temp->next!=0){
    temp=temp->next;
}
temp->next=new;
temp=head;
while(temp!=0){
printf("%d\t",temp->data);
temp=temp->next;
}


    return 0;
}
