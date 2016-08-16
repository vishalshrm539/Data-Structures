#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int a[5]={4,4,4,2,5};
int maj=0,count=1;
for(int i=1;i<=4;i++)
{
if(a[maj]==a[i])
{
count++;
}
else
{
count--;
}
if(count==0)
{
maj=i;
count=1;
}
}
int n=0;
for(int j=0;j<=4;j++)
 {
 if(a[maj]==a[j])
 {
 n++;}
 }
 if(n>(n/2))
 {
printf("The majority element is:%d",a[maj]);
}
else
{
printf("NO majority element");
}
getch();
}
