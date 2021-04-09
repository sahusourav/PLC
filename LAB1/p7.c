// Write a C program to store every character typed at the keyboard into a file. The procedure should
// come to an end as soon as the character '~' is hit from the keyboard.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;

	fp = fopen("output.txt", "w");

	if(fp == NULL)
	{
		perror("Unable to open file.");
		exit(EXIT_FAILURE);
	}

	printf("Enter characters, press \'~\' to halt.\n");
	while(1)
	{
		scanf("%c", &ch);
		if(ch == '~')
			break;
		fputc(ch, fp);
	}

	fclose(fp);
	printf("All characters are entered to file \"output.txt\" successfully.\n");

	return 0;
}
