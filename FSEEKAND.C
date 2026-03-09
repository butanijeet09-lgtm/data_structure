#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	clrscr();

	fp=fopen("seek.txt","r");
	fseek(fp,0,SEEK_END);
	printf("%d",ftell(fp));
	fclose(fp);
	getch();

}