/*Chapter09ex01: Write a function begins( string1, string2 ) that returns true if
string1 begins string2. Write a program to test the function.*/

#include <stdio.h>

int start(char string1[], char string2[]) {
	int i = 0;          // index into a string 

	while (1) {
	
		// if the end of the string is reached without giving false, then to be true the previous bits should match. 
		 
		if (string1[ i ] == '\0') {
			return(1);
		}

		//  if they do not match it is false, but continues. 
		if (string1[i] != string2[i]) {
			return(0);
		}

		++i;
	}
}

int main(void) {

	if (start("hola", "hello")) {
		printf("they coincide\n");
	} else {
		printf("do not coincide\n");
	}

	return(0);
}
