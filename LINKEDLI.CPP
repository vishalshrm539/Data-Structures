#include<stdio.h>
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

void main()
{

int info;
printf("\nEnter numbers");
for(int i=0;i<5;i++)
{
scanf("%d",&info);

  insert(info);
  }
  print();
  getch();
  }
void insert(int x)
{
node* temp=(node*)malloc(sizeof(struct node));
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