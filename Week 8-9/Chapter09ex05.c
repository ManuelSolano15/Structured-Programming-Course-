/*Chapter09ex05: Write a function that returns the maximum value of an array of numbers.*/

#include <stdio.h>

int begin(int answer[]) {
	int high_num;      //bigger number  
	int i;              //* index into an array 

	high_num = 0;

	for (i = 0; i < sizeof(answer); ++i) {
		if (answer[i] > high_num) {
			high_num = answer[i];
		}
	}

	return high_num;
}

int main(void) {
	int values[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	printf("the largest number : %d\n", begin(values));
	return(0);
}