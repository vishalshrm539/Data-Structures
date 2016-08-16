#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[]="abcde";
int s=1;
int n=strlen(a);
char result[]="";
for(int i=0;i<n;i++)
{


result+=char(int(a[i]+s-97)%26+97);

}
printf("%s",a);
getch();
}