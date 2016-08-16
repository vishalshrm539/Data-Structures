#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[5],b[5];
printf("enter a\n");
gets(a);
printf("enter b");
gets(b);
int n=strcmp(a,b);
printf("%d",n);
getch();
}
