#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a[9]="abbababba";
int len=0;
int l=0;
int r=5;
while(a[len+l]==a[len+r]&&r+len<9)
{
len++;
}
printf("%d",len);

getch();
}