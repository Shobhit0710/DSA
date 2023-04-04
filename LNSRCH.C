#include<stdio.h>
#include<conio.h>
void main()
{
int a[10]={1,2,5,4,8,3,7,66,76,67};
int i,num,count=0;

clrscr();
printf("enter the number you want to search : ");
scanf("%d",&num);
for(i=0;i<10;i++)
{
 if(a[i]==num) {
  printf("number is at %d index found",i);
  count++;
  break;
}}
if(count==0){
 printf("number not found")  ;
 }
getch();
}