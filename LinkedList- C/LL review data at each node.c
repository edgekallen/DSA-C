#include<stdio.h>
#include<stdlib.h>
struct node
{ int data ;
  struct node *link;
};
void data_of_nodes(struct node *head)
{
    if(head=='null')
    {
        printf("LL is Empty");
    }
    struct node *ptr='null';
    ptr=head;
    while(ptr!='null')
    {
        printf("Data:%d\n",ptr->data);
        ptr=ptr->link;
    }
}

int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link='null';
    struct node *current=malloc(sizeof(struct node));
    current->data=55;
    current->link='null';
    head->link=current;
    current=malloc(sizeof(struct node));
    current->data=66;
    current->link='null';
    head->link->link=current;
    data_of_nodes(head);
    return(0);
}
