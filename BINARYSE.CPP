#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int a[]={1,2,3,4,5,6,7};

int search=6;
int low=0,high=6;
int mid=low+(high-low)/2;
for(int i=low;i<=high;i++)
{
if(search==a[mid]){
printf("element found at pos:%d",mid);
}
else if(search<a[mid])
{
high=mid;
if(search==a[i])
{
printf("pos is:%d",i);
}
}
else
{
low=mid;
if(search==a[i])
{
printf("pos is:%d",i);
}
}
}
getch();
}
