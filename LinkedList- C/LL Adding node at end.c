#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void Add_node_at_end(struct node *head , int data)
{
    if(head=='null')
    {
        printf("LL is Empty");
    }
    struct node *ptr=head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data=data;
    temp->link='null';
    while(ptr->link!='null')
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
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
   current->data=78;
   current->link='null';
   head->link->link=current;
   int data=90;
   Add_node_at_end(head,data);
 return(0);
}
