#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char t[]="ababbabba";
char p[]="ba";
int m=strlen(p);
int n=strlen(t);
for(int i=0;i<=n-m;i++)
{
for(int j=0;j<m;j++)
{
if(t[i+j]!=p[j])
{
break;
}
}
if(j==m)
{
printf("pattern found at index:%d\n",i);
}
}
getch();
}