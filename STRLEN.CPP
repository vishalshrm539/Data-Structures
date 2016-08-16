#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
printf("Enter string\n");
gets(a);
int length=strlen(a);
printf("The length of string:%s is:%d",a,length);
getch();
}