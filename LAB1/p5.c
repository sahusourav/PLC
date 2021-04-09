// Write a C program to write records to a file using structure.

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
	 
	fp = fopen("struct_output.txt", "w");

	if(fp == NULL)
	{
		perror("Unable to open file.");
		exit(EXIT_FAILURE);
	}

	struct Student s1 = {1, "Sourav"};
	struct Student s2 = {2, "Rahul"};

	fwrite(&s1, sizeof(struct Student), 1, fp);
	fwrite(&s2, sizeof(struct Student), 1, fp);

	if(fwrite != 0)
		printf("Contents to file written successfully.\nFile name: \"struct_output.txt\"\n");
	else
		printf("Error writing file.\n");

	fclose(fp);

	return 0;
}
