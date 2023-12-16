#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* top=0;

void push(){
int x;
printf("enter the value of x");
scanf("%d",&x);
struct node* newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=top;
top=newnode;
}

void pop(){
struct node* temp;
temp=top;
if(top==0){
printf("the list is empty");
}
else{
printf("%d\t\n",top->data); 
top=top->next;
free(temp);
}
}

void peek(){
if(top==0){
printf("the list is empty");
}  
else{
printf("%d\t\n",top->data);
}
}

void display(){
struct node* temp;
if(top==0){
printf("the list is empty");
}
else{
temp=top;
while(temp!=0){
printf("%d\t\n",temp->data);
temp=temp->next;
}
}
}

int main()
{ int n;
int choice=1;
while(choice){
printf("enter the value of n");
scanf("%d",&n);
switch(n){
    case 1:push();
    break;
    case 2:pop();
    break;
    case 3:peek();
    break;
    case 4:display();
    break;
    default:printf("invalid");
}
// printf("enter the value (0,1)");
// scanf("%d",&choice);
}

    return 0;
}
