#include<Stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10],b[10];
printf("Enter a string");
gets(a);  //to read string from stdin
strcpy(b,a);
printf("a:%s and b:%s",a,b);
getch();
}