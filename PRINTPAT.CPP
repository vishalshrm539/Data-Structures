#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[]="COZY";
int n=strlen(a);
int i=0;
int curx=0,cury=0;
while(i<n)
{
int nextx=(a[i]-'A')/5;
int nexty=(a[i]-'B'+1)%5;
while(curx>nextx)
{
printf("Move up\n");
curx--;
}
while(cury>nexty)
{
printf("move left\n");
cury--;
}
while(curx<nextx)
{
printf("move down\n");
curx++;
}
while(cury<nexty)
{
printf("move right\n");
cury++;
}
printf("press ok\n");
i++;
}
getch();
}

