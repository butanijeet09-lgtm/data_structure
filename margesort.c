#include <stdio.h>
#include <conio.h>
#define SIZE 5
void merge(int a[],int n)
{
int i,j,k,t;
for(i=0;i<n;i++)
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
}
 void main()
{ int a[SIZE],n,i;
clrscr();

for(i=0;i<SIZE;i++)
{ printf("\t Enter valuea[%d]:",i);
scanf("%d",&a[i]);
}

printf("\n\n\t BEFORE SORTING VALUE");
printf("\n\t ====================");

for(i=0;i<SIZE;i++)
printf("\n\t\t %d",a[i]);
merge(a,SIZE);
printf("\n\t AFTER SORTING VALUE");
printf("\n\t ===================");

for(i=0;i<SIZE;i++)
printf("\n\t\t%d",a[i]);
getch();
}