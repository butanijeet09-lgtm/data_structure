#include <stdio.h>
 #include <conio.h>
 #define size 5
void linear(int arr[],int);
 void main()
 {
 int i,a[size],n;
 clrscr();
 for(i=0;i<size;i++)
 {
 printf("\n\t a[%d] :=",i);
 scanf("%d",&a[i]);
 }
 printf("\n\t Enter the want to find = ");
 scanf("%d",&n);
 linear(a,n);
 getch();
 }
 void linear(int arr[],int key)
 {
 int i=0,found=0;
 for(i=0;i<size;i++)
 {
 if(arr[i]==key)
 {
 found=i;
 printf("\n Search is sucess");
 printf("\n key is position:%d",i+1);
 }
 }
 if(found==0)
 {
 printf("\n search element exit the list");
 }
 }