#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={1,2,5,4,8,3,7,66,76,67};
int i,sum=0;
clrscr();
for(i=0;i<10;i++)
{
sum+=a[i];
}
printf("\t sum of array is : %d\n\t",sum);
getch();
}