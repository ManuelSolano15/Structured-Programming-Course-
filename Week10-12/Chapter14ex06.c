/*Chapter14ex06: Design a file format to store a person's name, address, 
and otherinformation. Write a program to read this file and produce a set of
mailing labels.*/

#include <stdio.h>
#include <string.h>
char *in_file = "formatted-file.txt";



int main() {

	FILE *infile;           
	char line[100];        
	int position;   

printf ("**********************************************************************\n");
printf ("                   ----format----\n"); 
printf ("*First Name\n");
printf ("*Last Name\n");
printf ("*Street Address\n");
printf ("*City\n");
printf ("*ST\n");
printf ("*Zip Code\n");
printf ("*Phone (optional)\n");
printf ("**********************************************************************\n");
        



	infile = fopen(in_file, "r");
	if (infile == NULL) {
		fprintf(stderr, "Problem opening %s for reading\n", in_file);
		return(8);
	}

	position = 0;
	while (fgets(line, sizeof(line), infile)) {
		if (line[0] == '\n') {
			printf("\n");
			position = 0;
			continue;
		}

		line[strlen(line) - 1] = '\0';          

		switch (position) {
			case 1:
			case 2:
			case 5:
			case 6:
				printf("%s\n", line);       
				break;
			case 0:
			case 4:
				printf("%s ", line);        
				break;
			case 3:
				printf("%s, ", line);       
				break;
			default:
				printf("Error: unknown field\n");
		}

		++position;

	}

	fclose(infile);

	return(0);
}
