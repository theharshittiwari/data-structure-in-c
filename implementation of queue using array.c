#include <stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqeue(){
int x;
printf("enter the value of x");
scanf("%d",&x);
if(rear==N-1){
printf("overflow\n");
}
else if(front==-1&&rear==-1){
front=rear=0;
queue[rear]=x;
}
else{
rear++;
queue[rear]=x;
}
}

void dequeue(){
if(front==-1&&rear==-1){
printf("underflow");
}
else if(front==rear){
 front==rear==-1;   
}
else{
printf("%d\n",queue[front]);
front++;
}
}
void peak(){
if(front==-1&&rear==-1){
printf("underflow");
}
else{
printf("%d\n",queue[front]);
}
}
void display(){
int i=front;
while(i<=rear){
printf("%d\t\n",queue[i]);
i++;
}
}

int main()
{ int n;
int choice=1;
while(choice){
printf("enter the value of n");
scanf("%d",&n);
switch(n){
case 1: enqeue();
break;
case 2: dequeue();
break;
case 3: peak();
break;
case 4: display();
break;
}
}
return 0;
}
