#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int count=0;
int a[5]={1,20,6,4,5};
for(int i=0;i<=4;i++)
{
for(int j=i+1;j<=4;j++)
{
if(a[i]>a[j])
{
count++;
}
}
}
printf("%d",count);
getch();
}