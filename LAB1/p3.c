// Write a C program to copy the contents of a file into another file,
// character by charater.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp1, *fp2;
	char ch;

	// fp1 -> File pointer to source file
	// fp2 -> File pointer to destination file
	fp1 = fopen("sample.txt", "r");
	fp2 = fopen("output.txt", "w");

	if(fp1 == NULL || fp2 == NULL)
	{
		perror("Unable to open file/s.\n");
		exit(EXIT_FAILURE);
	}

	ch = fgetc(fp1);
	while(ch != EOF)
	{
		fputc(ch, fp2);
		ch = fgetc(fp1);
	}

	printf("Files copied succesfully from \"sample.txt\" to \"output.txt\"\n");

	return 0;
}
