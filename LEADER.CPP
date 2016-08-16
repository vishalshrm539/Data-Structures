#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int a[6]={16,17,4,3,5,2};
for(int i=0;i<=5;i++)
{
for(int j=i+1;j<=5;j++)
{
if(a[i]<a[j])
break;
}
if(j==6)
{
printf("leaders are:%d\n",a[i]);
}
}
getch();
}