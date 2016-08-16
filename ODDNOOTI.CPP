#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int count=0;
int a[5]={1,2,2,3,3};
for(int i=0;i<=4;i++)
{
for(int j=0;j<=4;j++)
{
if(a[i]==a[j])
{
count++;
}
}
if(count %2 != 0)
{
printf("The no. is:%d",a[i]);
}
count=0;
}
getch();
}