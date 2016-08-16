#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int a[5]={1,2,3,4,5};
//int *ptr=&a[1];
//printf("%d",*ptr);
/*int *ptr;
ptr=&a[1];
printf("The address of element is:%d\n",*ptr); */
//printf("address of a1:%u",&a[1]);
int *ptr;
ptr=&a[0];
for(int i=0;i<=4;i++)
{
printf("address of a[i]:%u\n",ptr);
ptr++;
}
getch();
}