#include<stdio.h>
#include<conio.h>
void push();
int pop();
char stack[5];
char item,top=-1,n=5;

void main()
{
clrscr();
int ch;
char choice;
char str[5];
/*
do
{
printf("Enter your choice...1for push 2 for pop\n") ;
scanf("%d",&ch);
switch(ch)
{
case 1:
  {
push();
break;
 }
case 2:
{
pop();
break;
}
}

printf("Do you want to continue..? y for yes else no\n");
fflush(stdin);
scanf("%c",&choice);

}
while(choice=='y');
for(int i=0;i<=top;i++)
{
printf("the stack is:%d\n",stack[i]);
} */
printf("Enter your string\n");
//for(int k=0;k<5;k++)
//{
//scanf("%c",&str[k]);
//}
gets(str);

//void push()
//{
//do
//{
//printf("Enter the element u want to insert\n");
//scanf("%d",&item);
//if(top==n-1)
//{
//printf("stack is full\n");
//}
//else
//{
for(int l=0;l<5;l++)
{
top=top+1;
stack[top]=str[l];
//top=top+1;
//stack[top]=item;
}
//}
//printf("Continue...?press y\n");
//fflush(stdin);
//scanf("%c",&c);
//while(c=='y');
//}
//int pop()
//{
//if(top==-1)
//{
//printf("stack is empty\n");
//}
//else
//{
//item=stack[top];
for(int n=0;n<5;n++)
{
//printf("%c\n",stack[top]);
str[n]=stack[top];
top=top-1;
}
printf("%s",str);
//return item;
//}
getch();
}