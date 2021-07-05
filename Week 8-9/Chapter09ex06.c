/*Chapter06ex06 Write a function that scans a character array for the character - and replaces it with _.*/

#include <stdio.h>

void change(char CharArray[]) {
	int i;          // index into an array 

	for (i = 0; i < sizeof (CharArray); ++i) {
		if (CharArray[i] == '-') {
			CharArray[i] = '_';
		}
	}
}

int main(void) {
	int i;          // index into an array

	char chars[] = { '&', '$', '/', '-', '(', '_', '=' };
	change(chars);

	for (i = 0; i < sizeof(chars); ++i) {
		printf("%c\n", chars[i]);
	}

	return(0);
}