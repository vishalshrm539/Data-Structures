#include<stdio.h>
#include<conio.h>
void insert(int [],int ,int, int);
void main()
{
clrscr();
int arr[]={1,2,4,5};
int size=sizeof(arr);
for(int i=0;i<4;i++)
{
printf("%d\n",arr[i]);
}
int ele,pos;
printf("Enter the element to be inserted\n");
scanf("%d",&ele);
 printf("Enter the position");
scanf("%d",&pos);
insert(arr,5,ele,pos);
getch();
}
void insert(int b[],int n,int el, int po){
int temp=b[po+1];
b[po+1]=b[po];
b[po+2]=temp;
b[po]=el;
printf("after insertion\n");
for(int j=0;j<=4;j++)
{
printf("%d\n",b[j]);
}
}
