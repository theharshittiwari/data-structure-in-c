#include <stdio.h>
#define N 5
int stack[N];
int top=-1;

void push(){
int x;
printf("enter the value of x");
scanf("%d",&x);
if(top==N-1){
printf("overflow");
}
else{
top++;
stack[top]=x;
}
}

void pop(){
int item;
if(top==-1){
printf("underflow");
}
else{
item=stack[top];
top--;
printf("%d",item);
}
}

void peek(){
if(top==-1){
printf("hello");
}  
else{
printf("%d",stack[top]);
}
}

void display(){
int i=top;
// printf("%d",top);
while(i!=0){
printf("%d",stack[i]);
i--;
}
printf("%d",stack[i]);
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
