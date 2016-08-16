#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct ArrayStack
{
int top;
int max;
int *array;
};
struct ArrayStack* createStack(int cap)
{
struct ArrayStack *stack=malloc(sizeof(ArrayStack));//malloc(6) struct is of size 6
stack->max=cap;
stack->top=-1;
stack->array=malloc(sizeof(int)*stack->max);
return stack;
}
int isFull(ArrayStack *stack)
{
if(stack->top==stack->max-1)
return 1;
else
return 0;
}
int isEmpty(struct ArrayStack *stack)
{
if(stack->top==-1)
return 1;
else
return 0;
}
void push(struct ArrayStack *stack,int item)
{
if(!isFull(stack))
{
stack->top++;
stack->array[stack->top]=item;
}
}
int pop(struct ArrayStack *stack)
{
int item;
if(!isEmpty(stack))
{
item=stack->array[stack->top];
stack->top--;
return item;
}
return -1;
}
void main()
{
clrscr();
struct ArrayStack *stack;
stack=createStack(4);
int choice,item;
while(1)
{
clrscr();
printf("\n1Push");
printf("\n2Pop");
printf("\3exit");
printf("Enter your choice");
printf("%d",&choice);
switch(choice)
{
case 1:
printf("\nEnter item");
scanf("%d",&item);
break;
case 2:
item=pop(stack);
if(item==-1)
printf("\nstack is empty");
else
printf("\npopped item is :%d",item);
case 3:
exit(0);

}
}
getch();
}
