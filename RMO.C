#include<stdio.h>
#include<conio.h>
void rmo();
void main()
{
clrscr();
rmo();

getch();
}
void rmo(){
int i,j,base,w,l1,l2,loc=0,n;
printf("enter no. of rows ");
scanf("%d",&i);
printf("enter no. of columns ");
scanf("%d",&j);
printf("enter the base address ");
scanf("%d",&base);
printf("enter the size of word ");
scanf("%d",&w);
printf("enter the lwr bound1 ");
scanf("%d",&l1);
printf("enter the lower bound 2 ");
scanf("%d",&l2);
printf("enter the number of rows ");
scanf("%d",&n);
loc=base+w*(n*(i-l1)+(j-l2));
printf("answer is %d",loc); }









