#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
};
void count_of_nodes(struct node *head)
{
    if(head=='null')
    {
     printf("LL is Empty");
    }
    struct node *ptr = 'null';
    ptr=head;
   int count=0;
    while(ptr!='null')
    {
        ptr=ptr->link;
        count++;

    }
    printf("Node present in linked list is:%d",count);
}

int main()
{
struct node *head=malloc(sizeof(struct node));
head->data=45;
head->link='null';
struct node *current=malloc(sizeof(struct node));
current->data=56;
current->link='null';
head->link=current;
current=malloc(sizeof(struct node));
current->data=78;
current->link='null';
head->link->link=current;
count_of_nodes(head);
return(0);
}

