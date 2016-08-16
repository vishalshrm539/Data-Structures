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
void insert(int x);
void print();
void del(int n);

void main()
{

  insert(1);
  insert(2);
  insert(3);
  insert(4);// list: 1234

     int n;
     printf("enter a pos\n");
     scanf("%d",&n);
  del(n);
  print();
  getch();
  }
void insert(int x)
{
node* temp=new node();
temp->info=x;
temp->next=head;
head=temp;
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
void del(int n)
{
struct node* temp1=head;
int i;
if(n==1)
{
head=temp1->next;
free(temp1);
return;
}
for(i=0;i<n-2;i++)
{
temp1=temp1->next;
}
struct node* temp2=temp1->next;
temp1->next=temp2->next;//n+1
free(temp2); //for c++ delete temp2
}