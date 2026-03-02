#include <stdio.h>
#include <conio.h>   

void main()
{
    int ret;
    char oldname[50], newname[50];

    clrscr();
    printf("enter old file name :");
    scanf("%s",&oldname);

    printf("enter new file name : ");
    scanf("%s",&newname);

   ret=rename(oldname,newname);

    if(ret==0)
    {
	printf("\nFile renamed successfully.");
    }
    else
    {
	printf("\nError renaming file.");
    }
    getch();
}