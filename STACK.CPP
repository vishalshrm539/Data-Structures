#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10

void push();
int pop();
void traverse();
int top=-1;
int ele;
int stack[MAXSIZE];
void main()
{
clrscr();
int choice;
char ch;
do
{
printf("for push enter 1\n");
printf("for pop enter 2\n");
printf("for traversal enter 3\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:traverse();
break;
}
printf("Do you want to continue?y or n\n");
fflush(stdin);
scanf("%c",&ch);
}
while(ch=='y');
getch();
}
void push()
{
if(top==MAXSIZE-1)
{
printf("Stack is overflow\n");
}
else
{
printf("enter the element to be inserted");
top=top+1;
scanf("%d",&ele);
stack[top]=ele;
}
}
int pop()
{
if(top==-1)
{
printf("stack is empty\n");
}
else
{
ele=stack[top];
top=top-1;
}
return ele;
}
void traverse()
{
for(int i=top;i>=0;i--)
{
printf("The stack is:%d\n",stack[i]);
}
}