#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[]="ababba";
char b[6];
int i=0;
int n=strlen(a);
int j=n-1;
while(a[i]==a[j]&&i<n)
{
i++;
j--;
}
if(i==n){
printf("string is palindrome");
}
else
{
printf("not palindrome");
}
/*int equal=strcmp(a,b);
if(equal==0)
{
printf("string is palindrome:%d",equal);
}
else
{
printf("string is not palindrome:%d",equal);
} */
getch();
}