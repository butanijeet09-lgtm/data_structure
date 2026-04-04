#include <stdio.h>
#include <conio.h>
void main ()
{
int I,n,found,*a,f=0;
clrscr();
printf("\n Enter index number :");
scanf("%d",&n);
printf("\n Enter array valus:");
for(i=0;i<n;i++)
{
printf("\n a[%d]=",i);
scanf("%d",&a[i]);
}
printf("\n Enter number index to found:");
scanf("%d",&found);
for(i=0;i<n;i++)
{
if(i==found)
{
 printf("\n value founded at position[%d]\n\n value is a[%d] : %d",i,i,a[i]);
 f=1;
 }
 }
 if(f==0)
 {
 printf("\n values not found \n please check the index");
 }
 getch();
 }