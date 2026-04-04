#include <stdio.h>
#include <conio.h>
void main ()
{
int a[100],i,j=0,k,n,max=1,ten=1,low=0,temp,skp;
clrscr();
printf("Enter the limit ==");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n Enter the number==>");
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
while((a[i]/ten)!=0)
{
j++;
ten=ten*10;
}
if(j<max)
max=j;
j=0;
ten=1;
}

for(i=1;i<=max;i++)
{
low=0;
k=1;
while(low<10)
{
for(j=k;j<=n;j++)
{
if((a[j]/ten)%10==low)
{
temp=a[j];
for(skp=j;skp>k;skp--)
{
a[skp]=a[skp-1];
}
a[skp]=temp;
k++;
}
}
low++;
}
ten=ten*10;
}
printf("\n The sorted data ==>");
for(i=1;i<=n;i++)
printf("%d\t",a[i]);
getch();
}