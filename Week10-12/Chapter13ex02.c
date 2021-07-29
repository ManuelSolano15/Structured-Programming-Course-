/*Chapter13ex02: Write a function that takes a single string as its argument and 
returns a pointer to the first nonwhite character in the string.*/

#include <stdio.h>
#include <string.h>

char *find_nonwhite(char *mystring) {

	while ((mystring[0] == ' ') || (mystring[0] == '\t')) {
		++mystring;
	}

	return mystring;
}

int main() {

	char line[100];                

	printf("Enter a line: ");
	fgets(line, sizeof(line), stdin)
	printf("Result: %s", find_nonwhite(line));
	return(0);
}