#include <stdio.h>
 #include <conio.h>
 #define size 5
 void binary(int[],int key);
 void main()
 {
 int i,a[size],t,j,n;
 int flag=0;
 clrscr();
 for(i=0;i<size;i++)
 {
 printf("\n Enter values");
 scanf("%d",&a[i]);
 }
 for(i=0;i<size;i++)
 {
 for(j=i+1;j<size;j++)
 {
 if(a[i]>a[j])
 {
 t=a[i];
 a[i]=a[j];
 a[j]=t;
 } } }
 printf("\n\t before Sorting");
 for(i=0;i<size;i++)
 {
 printf("\n\t%d",a[i]);
 }
 printf("\n Enter Values for search:");
 scanf("%d",&n);
 binary(a,n);
 getch();
 }
 
 void binary(int arr[],int n)
 {
 int high=0,mid=0,low=0,flag=0;
 high=size-1;
 mid=(low+high)/2;
 while(high>=low && flag!=1)
 {
 if(n<arr[mid])
 high=mid-1;
 else if(n>arr[mid])
 low=mid+1;
 else if(n==arr[mid])
 {
 printf("\n search is
ucessful");
printf("\n found at
d location ",mid+1);
 flag=1;
 }
 mid=(high+low)/2;
 }
 if(flag==0)
 {
 printf("\n search is un-sucessful");
 }
 }