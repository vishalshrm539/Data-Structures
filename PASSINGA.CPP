#include<stdio.h>
#include<conio.h>

int fun(int [], int);
void main()
{
clrscr();d
 int a[10]={1,2,3,4,5,6,7,8,9,10};
 int n=10;
int ans= fun(a,n);
 printf("The sum is:%d\n",ans);
 getch();
 }
 int fun(int b[], int)
 {
 int sum=0;
 for(int i=0;i<=9;i++)
 {
 sum=sum+b[i];
 }
 return sum;
 }
