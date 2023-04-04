#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={14,26,36,43,25,26,57,58,9,22};
int i,min=a[0],max=0;
clrscr();
for(i=0;i<10;i++)
{
if(a[i]<min){
min=a[i];
}
if(a[i]>max){
max=a[i];
}}
printf("\tmin term in the array is: %d\n\t",min);
printf("max term in the array is : %d",max);
getch();
}



