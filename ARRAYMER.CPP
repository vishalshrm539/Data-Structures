#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int a[5]={1,2,3,4,5};
int b[5]={6,7,8,9,10};
int c[10];
for(int i=0;i<=9;i++)
{
for(int j=0;j<=4;j++)
{
c[i]=a[j];
i++;
}
for(int k=0;k<=4;k++)
{
c[i]=b[k];
i++;
}
}
printf("After merging:\n");
for(int i1=0;i1<=9;i1++)
{
printf("%d\n",c[i1]);
}
getch();
}