// Write a C program to count characters, spaces, tabsi and newlines in a file.

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	FILE *fp;
	char ch;

	// noc -> number of chars, nos -> number of spaces
	// not -> number of tabs, nol -> number of newlines
	int noc = 0, nos = 0, not = 0, nol = 0;

	fp = fopen("count_ex.txt", "r");

	if(fp == NULL)
	{
		perror("Error while opening the file.\n");
		exit(EXIT_FAILURE);
	}
	while((ch = fgetc(fp)) != EOF)
	{
		noc++;
		if(ch == ' ')
			nos++;
		if(ch == '\n')
			nol++;
		if(ch == '\t')
			not++;
	}

	fclose(fp);

	printf("Number of characters = %d\n", noc - nos - not - nol);
	printf("Number of spaces = %d\n", nos);
	printf("Number of tabs = %d\n", not);
	printf("Number of newlines = %d\n", nol);

	return 0;
}
