#include<stdio.h>
#include<stdlib.h>
void add_at_beginning();
void add_at_end();
void add_at_position();
void delete_at_beginning();
void delete_at_end(); 
void delete_at_position();
int length();
void display();
void search();
void reverse();
struct node {
  int data;
  struct node *link;
};
struct node *head=NULL;
void main()
{
  int ch,r;
  while(1)
  {
    printf("Enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:add_at_beginning();
             break;
      case 2:add_at_end();
             break;
      case 3:add_at_position();
             break;
      case 4:delete_at_beginning();
             break;
      case 5:delete_at_end();
             break;
      case 6:delete_at_position();
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
             break;
      case 12:printf("Invalid case");
    }
  }
}
void add_at_beginning()
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("enter data value:");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(head==NULL)
    head=NULL;
  else
  {
    temp->link=head;
    head=temp;
  }
}
void add_at_end()
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter data value:");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(head==NULL)
    head=temp;
  else
  {
    struct node *ptr;
    while(ptr->link!=NULL)
    {
      ptr=ptr->link;
    }
    ptr->link=temp;
  }
}
void add_at_position()
{
  int pos;
  printf("Enter position:");
  scanf("%d",&pos);
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter data value:");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(pos<0 || pos>length())
    printf("Invalid Position");
  else if(pos==0)
    add_at_beginning();
  else
  {
    int c=0;
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
      if(c==pos-1)
      {
        temp->link=ptr->link;
        ptr->link=temp;
      }
      ptr=ptr->link;
      c++;
    }
  }
}
void delete_at_beginning()
{
  if(head==NULL)
    printf("Linkedlist is empty");
  else
  {
    struct node *ptr;
    ptr=head;
    head=ptr->link;
    ptr->link=NULL;
  }
}
void delete_at_end()
{
  if(head==NULL)
    printf("Linkedlist is empty");
  else
  {
    struct node *ptr,*prev;
    ptr=head;
    while(ptr->link!=NULL)
    {
      prev=ptr;
      ptr=ptr->link;
    }
    if(ptr==head)
      head=NULL;
    else
      prev->link=NULL;
  }
}
void delete_at_position()
{
  int pos;
  printf("Enter position:");
  scanf("%d",&pos);
  if(head==NULL)
    printf("Linkedlist is empty");
  else
  {
    if(pos<0 || pos>length())
      printf("Invalid Position");
    else if(pos==0)
      delete_at_beginning();
    else
    {
      int c=0;
      struct node *ptr,*prev;
    ptr=head;
    while(ptr!=NULL)
    {
      if(c==pos-1)
      {
        prev=ptr;
        ptr=ptr->link;
        prev->link=ptr->link;
        ptr->link=NULL;
      }
      ptr=ptr->link;
      c++;
    }
   }
  }
}
int length()
{
  int c=0;
  struct node *ptr;
  ptr=head;
  if(head==NULL)
    return 0;
  else
  {
    while(ptr!=NULL)
    {
      c++;
      ptr=ptr->link;
    }
  return c;
 }
}
void display()
{
  if(head=NULL)
    printf("Linkedlist is empty");
  else
  {
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
      printf("%d->",ptr->data);
      ptr=ptr->link;
    }
    printf("\n");
  }
}
void search()
{
  int ele;
  printf("Enter element to search:");
  scanf("%d",&ele);
  if(head==NULL)
    printf("Linkedlist is empty");
  else
  {
    int c=0;
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
      if(ptr->data==ele)
        printf("Element is found at %d",c);
      else
        printf("Element is not found");
      c++;
      ptr=ptr->link;
    }
  }
}
void reverse()
{
  if(head==NULL)
    printf("Linkedlist is empty");
  else
  {
    struct node *prev,*ptr,*next;
    ptr=next=head;
    prev=NULL;
    while(next!=NULL)
    {
      next=next->link;
      ptr->link=prev;
      prev=ptr;
      ptr=next;
    }
    head=prev;
  }
}
