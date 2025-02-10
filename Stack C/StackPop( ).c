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

int pop()
{
    if(Top==-1)
     {
     printf("Stack is Empty");
     return;
     }

    temp=arr_stack[Top];
    Top--;
    return temp;
}

void print_stack()
{
    for(int i=Top;i>=0;i--)
    {
        printf("%d\n",arr_stack[i]);
    }
}
int main()
{
   int data;
   push(4);
   push(5);
   push(3);
   push(5);
   data=pop();
   data=pop();
   print_stack();
  return(0);
}

