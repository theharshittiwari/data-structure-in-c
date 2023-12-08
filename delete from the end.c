#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* next;
struct node* prev;
};
int count=0;
struct node* memoryallocation(){
struct node* newnode;   
newnode=(struct node*)malloc(sizeof(struct node));
count=count+1;
printf("enter the value of data in the newnode");
scanf("%d",&newnode->data);
newnode->prev=NULL;
newnode->next=NULL;
return newnode;
}

struct node* create(struct node* head){
struct node* newnode; 
struct node* temp;
newnode=memoryallocation();
if(head==NULL){
head=temp=newnode; 
}
else {
temp=head;
while(temp->next!=0){
newnode->prev=temp;
temp=temp->next;
}
temp->next=newnode;
}
return head;
} 

struct node* delete(struct node* head){
struct node* newnode,* temp,*pas;
temp=head;
while(temp->next!=0){
temp=temp->next;
}
pas=temp->prev;
pas->next=0;
free(temp);
return head;
}

void display(struct node* head){
struct node* temp;
temp=head;
while(temp!=NULL){
printf("%d\t\n",temp->data);
temp=temp->next;
}
}

void linkedlist(){
struct node*head=NULL;
int leave=1,choice;
while(leave){
printf("enter the choice(0,1,2,3)");
scanf("%d",&choice);
if(choice==0){
leave=0;
}
if(choice==1){
head=create(head);
}
if(choice==2){
display(head);
}
if(choice==3){
head=delete(head);
}
}
}

int main()
{ linkedlist();
 return 0;
}
