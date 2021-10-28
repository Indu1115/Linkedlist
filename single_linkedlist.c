#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node *add;
};
void insert_at_end();
void insert_at_beginning();
void insert_at_given_position();
void delete_at_beginning();
void delete_at_end();
void delete_at_given_position();
int length();
void display();
void reverse();
void search();
struct node *head=NULL;
int main() {
 int ch,r;
 while(1)
 {
 printf("Enter choice");
 scanf("%d",&ch);
 switch(ch) {
 case 1:insert_at_end();
 break;
 case 2:insert_at_beginning();
 break;
 case 3:insert_at_given_position();
 break;
 case 4:delete_at_beginning();
 break;
 case 5:delete_at_end();
 break;
 case 6:delete_at_given_position();
 break;
 case 7:r=length();
 printf("%d",r);
 break;
 case 8:display();
 break;
 case 9:reverse();
 break;
 case 10:search();
 break;
 case 11:exit(1);
 case 12:printf("Invalid case");
 }
 }
return 0;
}
void insert_at_end() {
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 printf("Enter node data:");
 scanf("%d",&temp->data);
 temp->add=NULL;
 if(head==NULL)
 head=temp;
 else{
 struct node *ptr;
 ptr=head;
 while(ptr->add!=NULL)
 ptr=ptr->add;
 ptr->add=temp;
 }
}
void insert_at_beginning()
{
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 printf("Enter node data:");
 scanf("%d",&temp->data);
 temp->add=NULL;
 if(head==NULL)
 head=temp;
 else{
 temp->add=head;
 head=temp;
 }
}
void insert_at_given_position()
{
 int pos;
 printf("Enter position");
 scanf("%d",&pos);
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 printf("Enter node data:");
 scanf("%d",&temp->data);
 temp->add=NULL;
 if(pos<0 || (pos>length()))
 printf("Invalid position");
 if(pos==0)
 insert_at_beginning();
 else
 {
 int c=0;
 struct node *ptr;
 ptr=head;
 while(ptr!=NULL)
 {
 if(c==pos-1)
 {
 temp->add=ptr->add;
 ptr->add=temp;
 }
 ptr=ptr->add;
 c++;
 }
 }
}
int length()
{
 int c=0;
 struct node *ptr;
 ptr=head;
 if(head==NULL)
 printf("Length is 0");
 else
 {
 while(ptr!=NULL)
 {
 c++;
 ptr=ptr->add;
 }
 return c;
 }
}
void delete_at_beginning()
{
 if(head==NULL)
 printf("List is empty we cant delete\n");
 else
 {
 struct node *ptr;
 ptr=head;
 head=ptr->add;
 ptr->add=NULL;
 }
}
void delete_at_end()
{
 if(head==NULL)
 printf("List is empty we cant delete\n");
 else
 {
 struct node *ptr,*prev;
 ptr=head;
 while(ptr->add!=NULL)
 {
 prev=ptr;
 ptr=ptr->add;
 }
 if(ptr==head)
 head=NULL;
 else
 prev->add=NULL;
 }
}
void delete_at_given_position()
{
 int pos;
 printf("Enter position");
 scanf("%d",&pos);
 if(head==NULL)
 printf("List is empty we cant delete\n");
 else
 {
 if(pos==0)
 delete_at_beginning();
 else if(pos<0 || pos>length())
 printf("Invalid position");
 else
 {
 struct node *ptr,*prev;
 int c=0;
 ptr=head;
 while(ptr!=NULL)
 {
 if(c==pos-1)
 {
 prev=ptr;
 ptr=ptr->add;
 prev->add=ptr->add;
 ptr->add=NULL;
 }
 ptr=ptr->add;
 c++;
 }
 }
 }
}
void reverse()
{
 if(head==NULL)
 printf("List is empty\n");
 else
 {
 struct node *ptr,*prev,*next;
 ptr=next=head;
 prev=NULL;
 while(next!=NULL)
 {
 next=next->add;
 ptr->add=prev;
 prev=ptr;
 ptr=next;
 }
 head=prev;
 }
}
void search()
{
  int ele;
  printf("Enter element to search:");
  scanf("%d",&ele);
  if(head==NULL)
    printf("Linkedlist is empty\n");
  else
  {
    int c=0,flag=0;
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
      if(ptr->data==ele)
      {
        flag=1;
        break;
      }
      c++;
      ptr=ptr->add;
    }
    if(flag==1)
    printf("Element is found at %d\n",c);
    else
    printf("Element is not found\n");
  }
}
void display()
{
 if(head==NULL)
 printf("Linkedlist is empty\n");
 else{
 struct node *ptr;
 ptr=head;
 while(ptr!=NULL)
 {
 printf("%d -> ",ptr->data);
 ptr=ptr->add;
 }
 printf("\n");
 }
}
