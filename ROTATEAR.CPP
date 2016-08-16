#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int a[5]={1,2,3,4,5};
int d=2;
int temp[2];
for(int l=0;l<=1;l++)
{
temp[l]=a[d-2];
d++;
}
d=2;
for(int i=d;i<=4;i++)
{
a[i-2]=a[i];
}
int j=0;
for(int k=d+1;k<=4;k++)
{
a[k]=temp[j];
j++;
}
for(i=0;i<=4;i++)
{
printf("%d\n",a[i]);

 }
 getch();
 }