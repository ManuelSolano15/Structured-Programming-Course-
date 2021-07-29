/*Chapter14ex02: Write a program to copy a file, expanding 
all tabs to multiple spaces.*/

#include <stdio.h>

const char *in_filename = "file-in.pl";
const char *out_filename = "file-out.pl";

int main() {

	FILE *infile;           
	FILE *outfile;          

	int c;              


	infile = fopen(in_filename, "r");
	if (infile == NULL) {
		fprintf(stderr, "Problem opening %s for reading\n", in_filename);
		return(8);
	}

	
	outfile = fopen(out_filename, "w+");
	if (outfile == NULL) {
		fprintf(stderr, "Problem opening %s for writing\n", out_filename);
		return(8);
	}

	while (1) {

		c = fgetc(infile);

		if (c == EOF) {
			break;
		}

		if (c == '\t') {
			fputc(' ', outfile);
			fputc(' ', outfile);
			fputc(' ', outfile);
			fputc(' ', outfile);
		} else {
			fputc(c, outfile);
		}
	}

	fclose(infile);
	fclose(outfile);

	return(0);
}

© 2021 GitHub, Inc.