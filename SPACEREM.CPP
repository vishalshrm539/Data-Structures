#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[]="vis hal";
int n=strlen(a);
for(int i=0;i<n;i++)
{
if(a[i]==' '&&i!=n)
{
a[i]=a[i+1];
a[i+1]=a[i+2];
a[i+2]=a[i+3];
a[i+3]=NULL;
}
}
printf("%s",a);
getch();
}

