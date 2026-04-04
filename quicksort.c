#include <stdio.h>
#include <conio.h>
#define size 5

void quick_sort(int a[],int first,int last)
{
int t,low,high,pivot;
low=first;
high=last;
pivot=a[(first+last)/2];

do
{
while(a[low]<pivot)
low++;
while(a[high]>pivot)
high--;

if(low<=high)
{
t=a[low];
a[low++]=a[high];
a[high--]=t;
}
}
while(low<=high);
if(first<high)
quick_sort(a,first,high);
if(low<last)
quick_sort(a,low,last);

}

void main ()
 {
int a[size],i;
clrscr();

for(i=0;i<size;i++)
{
printf("\n Enter valuesa[%d]:",i);
scanf("%d",&a[i]);
}

printf("\n the values Before sorting");

for(i=0;i<size;i++)
{
printf("%d",a[i]);
}

printf("\n");
quick_sort(a,0,size-1);
printf("\n the values After sorting");

for(i=0;i<size;i++)
{
printf("%d",a[i]);
}

getch();
}
