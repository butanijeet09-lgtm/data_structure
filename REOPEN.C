#include<stdio.h>
void main()
{
	FILE *fp;
	clrscr();
	fp=freopen("reopen.txt","w+",stdin);
	printf("hello first");
	fclose(fp);
	getch();

}