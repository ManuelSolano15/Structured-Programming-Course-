/*Chapter14ex03: Write a program that reads a file containing a list of numbers,
and then writes two files, one with all numbers divisible by three
and another containing all the other numbers.*/


#include <stdio.h>

const char *in_filename = "in-file.txt";

const char *out_filename = "out-file.txt";
const char *out_3s_filename = "out-3s-file.txt";

int main() {

	FILE *infile;           
	FILE *outfile;          
	FILE *out3file;         

	char line[100];         
	int number;             

	infile = fopen(in_filename, "r");
	if (infile == NULL) {
		fprintf(stderr, "Error: Problem opening %s for reading\n", in_filename);
		return(8);
	}

	outfile = fopen(out_filename, "w+");
	if (outfile == NULL) {
		fprintf(stderr, "Error: Problem opening %s for writing\n", out_filename);
		fclose(infile);
		return(8);
	}

	out3file = fopen(out_3s_filename, "w+");
	if (out3file == NULL) {
		fprintf(stderr, "Error: Problem opening %s for writing\n", out_3s_filename);
		fclose(infile);
		fclose(outfile);
		return(8);
	}

	while (fgets(line, sizeof(line), infile)) {
		sscanf(line, "%d", &number);
		if ((number % 3) == 0) {
		
			fprintf(out3file, "%d\n", number);
		} else {
			fprintf(outfile, "%d\n", number);
		}
	}

	fclose(infile);
	fclose(outfile);
	fclose(out3file);

	return(0);
}
