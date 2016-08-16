#include<stdio.h>
#include<conio.h>

void main()
{
char a[]="Hello World";
int count=0;
for(int i=0;a[i]!='\0';i++)
{
count++;
}
printf("The string:%s\n has %d characters",a,count);
getch();
}