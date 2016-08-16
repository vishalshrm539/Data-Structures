#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node* next;
};
struct node* head;
void insert(int x,int pos);
void print();

void main()
{

  insert(1,1);
  insert(2,2);
  insert(3,1);
  insert(4,2);

  print();
  getch();
  }
void insert(int x,int n)
{
node* temp1=new node();
temp1->info=x;
temp1->next=NULL;
if(n==1)
{
temp1->next=head;
head=temp1;
return;
}
node* temp2=head;
for(int i=0;i<n-2;i++)
{
temp2=temp2->next;
}
temp1->next=temp2->next;
temp2->next=temp1;
}
void print()
{
struct node* temp=head;
printf("\nthe list is:");
while(temp!=NULL)
{
printf("%d",temp->info);
temp=temp->next;
}
}