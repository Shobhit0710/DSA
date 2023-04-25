#include<conio.h>
#include<stdio.h>
typedef struct nodetype
{
int coeff;
int power;
struct nodetype*node;
}node;
void main()
{
node*poly1=NULL,*poly2=NULL,*poly3=NULL;
while(1)
scanf("%d%d",&coeff,&power);
createpoly(&poly1,coeff,power);
createpoly(&poly2,coeff,power);
addpoly(poly1,poly2,poly3);
displaypoly(poly3);
}
void createpoly(node**poly,int "c,int p)
{
ptr=(node*)malloc(sizeof(node));
ptr->coeff=c;
ptr->powere=p;
if(*poly1=NULL)

{
ptr->next=NULL;
*poly=ptr;
}
else
{
ptr->next=*poly;
*poly=ptr;
}
}
void addpoly(node*poly1,node*poly2,node*poly3)
{
while(poly1!=NULL && poly2!=NULL)
if(poly1->power > poly2->power)
{
c=poly1->coeff;
p=poly1->power;
createpoly(poly3,c,p);
poly1=poly1->next;
}
else if(poly->p < poly2->p )
{
c=poly1->coeff;
p=poly->power;
}
else
{
c=poly1+c+poly2+c;
if(c!=0)
{
p=poly1->power;
createpoly(poly3,c,p);
}
poly1=poly1->next;
poly2=poly2->next;
}
if(poly1==NULL)
{
for(;poly2=NULL;poly2=poly2->next)
createpoly(poly3,poly2->c,poly2->p);
}
else
{
for(;poly1!=NULL;poly1=poly1->next)
createpoly(poly3,poly1->coeff,poly1->power)   ;
}
}
























































