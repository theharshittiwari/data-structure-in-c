#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* front=0;
struct node* rear=0;
void enqueue(){
struct node* newnode;
newnode=(struct node*)malloc(sizeof(struct node));
int x;
printf("enter the data of newnode");
scanf("%d",&x);
newnode->data=x;
newnode->next=0;
if(front==0&&rear==0){
front=rear=newnode;
rear->next=newnode;
}
else{
rear->next=newnode;
rear=newnode;
rear->next=front;
}
}

void dequeue(){
struct node* temp;
if(front==0&&rear==0){
printf("the position is invalid");
}
else{
temp=front;
printf("%d\t\n",temp->data);
front=front->next;
free(temp);
}
}

void display(){
struct node* temp;
temp=front;
while(temp->next!=front){
printf("%d\t\n",temp->data);
temp=temp->next;
}
printf("%d\t\n",temp->data);
}
int main()
{int n,choice=1;
while(choice){
printf("enter the value of n");
scanf("%d",&n);
switch(n){
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
}
}

    return 0;
}
