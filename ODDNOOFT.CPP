#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int res=0;
int a[3]={5,2,2};
for(int i=0;i<=2;i++)
{
res=res^a[i];
}
printf("The no is:%d",res);
getch();
}