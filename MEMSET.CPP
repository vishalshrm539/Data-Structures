#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
/*char a[10],b[10];
char v;
memset(a,'v'd,4);
printf("%s",a);  */
char c[40]="Hello-world";
const char s[1]="-";
char *token;
token=strtok(c,s);
printf("%s",token);
getch();
}