// Write a C program to read records from a file using structure.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	int roll_no;
	char name[20];
};

int main()
{
	FILE *fp;
	 
	fp = fopen("struct_output.txt", "r");

	if(fp == NULL)
	{
		perror("Unable to open file.");
		exit(EXIT_FAILURE);
	}

	struct Student s;

	printf("Contents of file \"struct_output.txt\" is/are:\n");

	while(fread(&s, sizeof(struct Student), 1, fp))
		printf("Roll no.: %d\nName: %s\n", s.roll_no, s.name);

	fclose(fp);

	return 0;
}
