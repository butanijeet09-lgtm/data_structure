#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fp;
    int roll;
    char name[88];

    clrscr();

    fp = fopen("scanf.txt","r");

    if(fp == NULL)
    {
	printf("File not found");
	getch();
	return;
    }

    fscanf(fp,"%d %s",&roll,name);

    printf("Roll : %d\nName : %s\n",roll,name);

    fclose(fp);
    getch();
}