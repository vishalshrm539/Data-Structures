#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[10],b[10];
printf("Enter the first string");
gets(a);
printf("Enter the sec string");
gets(b);
strcat(a,b);
printf("After concat the stringa is:%s",a);
getch();
}
