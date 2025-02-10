#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int arr_stack[MAX];
int Top=-1;
int temp;

void push(int data)
{
    if(Top==MAX-1)
    {
     printf("Stack is full!!");
     return;
    }
     Top++;
     arr_stack[Top]=data;
}

void pop()
{
    if(Top==-1)
     {
     printf("Stack is Empty");
     return;
     }
     else
     {
      temp=arr_stack[Top];
      Top--;
     }
}

int main()
{
   push(4);
   push(5);
   push(3);
   push(5);
   push(2);
   push(1);
  return(0);
}
