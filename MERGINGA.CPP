#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[4]={1,2,3,4};
int b[8];
b[0]=5;
b[2]=6;
b[4]=7;
b[6]=8;
for(int j=0;j<=3;j++)
{
for(int i=0;i<=7;i++)
{
if(i%2!=0)
{
b[i]=a[j];
j++;
}
}
}
for(int k=1;k<=7;k++)
{
int key=b[k];
int j=k-1;
while(j>=0&&b[j]>key)
{
b[j+1]=b[j];
j=j-1;
}
b[j+1]=key;
}
for(k=0;k<=7;k++)
{
printf("%d\n",b[k]);
}
getch();
}
