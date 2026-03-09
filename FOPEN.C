include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp;

    clrscr();

    fp = fopen("sample.txt", "w");

    if (fp == NULL)
    {
	printf("Error opening file");
	getch();
	return;
    }

    fprintf(fp, "Hello World");
    fclose(fp);

    printf("File created successfully");

    getch();
}