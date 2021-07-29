/*Chapter14ex01: Write a program that reads a file and then counts 
the number of lines in it.*/

#include <stdio.h>

const char *filename = "file.txt";

int main() {

	FILE *fh;          
	char line[100];       

	int count = 0;        

	fh = fopen(filename, "r");
	if (fh == NULL) {
		fprintf(stderr, "Problem opening file %s\n", filename);
		return(8);
	}

	while (fgets(line, sizeof(line), fh)) {
		++count;
	}

	printf("%d lines\n", count);

	return(0);
}