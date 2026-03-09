
#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fp;
    int n;

    clrscr();

    fp = fopen("putw.txt", "w");

    for(n=1; n<=5; n++)
    {
        putw(n, fp);
    }

    fclose(fp);

	fp = fopen("putw.txt", "r");

    for(n=1;n<=5;n++)
    {
	n=getw(fp);
        printf("%d ", n);
    }

    fclose(fp);
    getch();
}