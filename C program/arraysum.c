// Program to find sum of elements in an array
#include<stdio.h>
#include<conio.h>
void main()
{
//Declaring variables
int a[10],n,i,sum=0;
clrscr();
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter the elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum += a[i];
}
printf("Sum : %d",sum);
getch();
}
