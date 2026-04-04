#include <stdio.h>
#include <conio.h>
#define size 5
void main ()
{
int a[size],i,j,k,t;
clrscr ();
for(i=0;i<size;i++)
{
 printf("Enter any values a[%d] :=",i);
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
 for(j=0;j<i;j++)
 {
  if(a[j]>a[i])
 {
  t=a[j];
  a[j]=a[i];
	for(k=i;k>j;k--)
		a[k]=a[k-1];
		a[k+1]=t;
 } 
 } 
}
printf("\n sorted values..\n");
for(i=0;i<size;i++)
{
 printf("\n\t%d",a[i]);
}
getch ();
}