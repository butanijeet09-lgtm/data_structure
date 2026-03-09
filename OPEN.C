
#include<stdio.h>
#include<conio.h>
 void main()
{
	 FILE *fp;
	 clrscr();

	 fp=fopen("open.txt","w");
	 fprintf(fp,"some text in file ");
	 fclose(fp);
	 getch ();

}