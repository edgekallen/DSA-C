#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node* deletion_of_node(struct node *head)
{
    ;
   if(head=='null')
   {
       printf("LL is Empty");
   }
   else
   {
       struct node *temp=head;
       head=head->link;
       free(temp);

   }
   return(head);
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
   struct node *ptr;
   head=deletion_of_node(head);
   ptr=head;
   while(ptr!='null')
   {
       printf("%d",ptr->data);
       ptr=ptr->link;
   }
    return(0);
}
