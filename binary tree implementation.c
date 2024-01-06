#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* left,*right;
};
struct node* create(){
int x;
struct node* newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the value of x");
scanf("%d",&x);
if(x==-1){
 return 0;  
}
newnode->data=x;
printf("enter left child of %d\n",x);
newnode->left=create();
printf("enter right child of %d\n",x);
newnode->right=create();
return newnode;
}
int main()
{ struct node* root;
root=0;
root=create();

    return 0;
}
