// Write a C program to receive string from keyboard and write them to a file.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 200

int main()
{
	FILE *fp;
	char str[BUFFER_SIZE], stop[2] = "*";

	fp = fopen("output.txt", "w");

	if(fp == NULL)
	{
		perror("Unable to open file");
		exit(EXIT_FAILURE);
	}

	printf("Enter a string>>\n");
	
	fgets(str, BUFFER_SIZE, stdin);
	fputs(str, fp);

	printf("String is saved successfully in the file \"output.txt\".\n");

	fclose(fp);

	return 0;
}
