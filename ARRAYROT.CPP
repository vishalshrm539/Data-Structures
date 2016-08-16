#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[5]={1,2,3,4,5};
int d=2;
for(int i=0;i<d;i++)
{
int temp=a[0];
for(int j=0;j<=3;j++)
{
a[j]=a[j+1];
}
a[j]=temp;
}
for(int k=0;k<=4;k++)
{
printf("%d\n",a[k]);
}
getch();
}