#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int sum=0;
int sum1=0;
int a[6]={2,1,6,4,5};
for(int j=1;j<=6;j++)
{
int sum1 = sum1+j;
}

for(int i=0;i<=4;i++)
{
int sum = sum + a[i];
}
			 //int n=(sum1-sum);

				  //printf("The missing no is:%d\n",n);
printf("%d %d\n",sum,sum1);
getch();
}
