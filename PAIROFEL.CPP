#include<stdio.h>
#include<conio.h>

void main(){
clrscr();
int sum=0;
int a[]={1,2,3,4,5,6};
for(int i=0;i<=5;i++)
{
for(int j=0;j<=5;j++)
{
if(a[i]+a[j]==4)
{
sum++;
}
}
i++;
}
printf("%d",sum);
getch();
}
