// Write a C program to remove all blank spaces from file.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp, *fp1;
	// fp -> file pointer to source file.
	// fp1 -> file pointer to destination file.
	
	char ch;

	fp = fopen("sample.txt", "r");
	fp1 = fopen("output.txt", "w");

	if(fp == NULL || fp1 == NULL)
	{
		perror("Unable to open file/files");
		exit(EXIT_FAILURE);
	}

	while((ch = fgetc(fp)) != EOF)
	{
		if(ch == ' ' || ch == '\t')
			continue;
		fputc(ch, fp1);
	}

	printf("Spaces removed successfully from the file and can\nbe viewed in \"output.txt\" file.\n");

	fclose(fp);
	fclose(fp1);

	return 0;
}
