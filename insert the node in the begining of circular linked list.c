#include <stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* tail;
void create()
{ int choice=1;
tail=0;
struct node* newnode;
while(choice){
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the node data:");
scanf("%d",&newnode->data);
newnode->next=0;
if(tail==0){
tail=newnode;
tail->next=newnode;
}
else{
newnode->next=tail->next;
tail->next=newnode;
tail=newnode;
}
printf("do you want to continue (0,1,2)");
scanf("%d",&choice);
}
}
void insert(){
struct node* temp,*newnode;
int choice=1;
while(choice){
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the node data:");
scanf("%d",&newnode->data);
newnode->next=0;
temp=tail->next;
tail->next=newnode;
newnode->next=temp;
 printf("insert the node");
 scanf("%d",&choice);
}
}
void display(){
if(tail==0){
printf("the list is empty");
}
else{
struct node* temp;
temp=tail->next;
while(temp->next!=tail->next){
printf("%d\t\n",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
}
}
int main(){
create();
insert();
display();
return 0;
}
