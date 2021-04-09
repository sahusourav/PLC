// Write a C program to display contents of a file on screen

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	FILE *fp;

	fp = fopen("sample.txt", "r");

	if(fp == NULL)
	{
		perror("Error while opening the file.\n");
		exit(EXIT_FAILURE);
	}

	printf("Contents of \"sample.txt\" file are:\n\n");

	while((ch = fgetc(fp)) != EOF)
		printf("%c", ch);

	fclose(fp);

	return 0;
}
