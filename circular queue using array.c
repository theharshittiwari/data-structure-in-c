#include <stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(){
int x;
printf("enter the value of x");
scanf("%d",&x);
if((rear+1)%N==front){
printf("overflow");
}
else if(front==-1&&rear==-1){
front=rear=0;
queue[rear]=x;
}
else{
rear=(rear+1)%N;
queue[rear]=x;
}
}

void dequeue(){
if(front==rear){
printf("%d",queue[front]);
front=rear=-1;
}
else if(front==-1&&rear==-1){
printf("underflow");
}
else{
printf("%d\t\n",queue[front]);
front=(front+1)%N;
}
}

void display(){
int i=front;
while(i!=rear){
printf("%d\t\n",queue[i]);
i=(i+1)%N;
}
printf("%d\t\n",queue[i]);
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
