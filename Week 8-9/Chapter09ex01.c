/*chapter09ex01: Write a procedure that counts the number of words in a string.
(Your documentation should describe exactly how you define a word.)
Write a program to test your new procedure.*/

#include <stdio.h>

int countWords(char answer[]) {
	static int str_idx    = 0;          // index into the string 
	static int count = 0;          //word counter 

	while (answer[str_idx] != '\0') {

		if ((answer[str_idx] == ' ') || (answer[str_idx] == '\n')) {
			++count;
		}

		++str_idx;
		countWords(answer);
	}

	return count;
}

int main(void) {
	int result;
	char line[100];             // keyboard input 

	printf("enter a phrase : ");
	fgets(line, sizeof(line), stdin);

	result = countWords(line);
	printf("there are %d words\n", result);

	return(0);
}