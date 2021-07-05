/*Chapter09ex03:Write a function count( number, array, length ) that countsthe number of times number appears in array. 
The array haslength elements. The function should be recursive. Writea test program to go with the function.*/

#include <stdio.h>

int count(int num, int array[], int length) { //num=number

	// start the array  
	if (length == 0) {
		return 0;
	}

	if (array[length - 1] == num) {

    // increment the counter when a match is found 

		return(1 + count(num, array, length - 1));
	} else {
		return(count(num, array, length - 1));
	}
}

int main(void) {
	int result;

	int list[] = {0,1,0,2,3,4,0,};
	result = count(1, list, sizeof(list));
	printf("appears %d times\n", result);
	return(0);
}