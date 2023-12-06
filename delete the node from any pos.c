#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* next;
};

struct node* memoryallocation(){
struct node* newnode;   
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the value of data in the newnode");
scanf("%d",&newnode->data);
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
temp=temp->next;
}
temp->next=newnode;
}
return head;
} 

void delete(struct node* head){
struct node* temp,*prevnode;
while(temp->next!=0){
prevnode=temp ;  
temp=temp->next;
}
free(temp);
prevnode->next=0;
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
delete(head);
}
}
}

int main()
{ linkedlist();
 return 0;
}
