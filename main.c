#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE* fp;
	char name[100];
	
	printf("Input a file names : ");
	scanf("%s",name);
	
	//fopen
	fp = fopen(name, "r");
	
	//error handling (坷幅贸府, 规绢内靛) 
	if (fp == NULL)
	{
		printf("ERROR! Check the file name : %s\n", name);
		return -1;
	}

	
	printf("%c\n", fgetc(fp));
	
	//fclose
	fclose(fp);
		
	return 0;
	
}
