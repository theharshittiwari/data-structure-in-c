#include <stdio.h>

int main()
{ int i,n,size,number,pos;
printf("enter the value of n");
scanf("%d",&n);
printf("enter the value of size");
scanf("%d",&size);
int a[n];
if(size>n)
{
 printf("the condition is overflow");
}
else
{
printf("enter the element in number");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}

printf(" enter the position where you want to delete  the number");
scanf("%d",&pos);
if(pos<0||pos>size){
printf("the number is invalid");
}
for(i=pos-1;i<size-1;i++){
a[i]=a[i+1];
}
size--;
for(i=0;i<size;i++)
{
printf("%d",a[i]);
}
}

    return 0;
}
