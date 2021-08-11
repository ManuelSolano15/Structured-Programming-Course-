/*chapter06ex04: Given an amount of money (less than $1.00), 
compute the number of quarters, dimes, nickels, and pennies needed.*/

#include <stdio.h>

char answer[100];             
int cents, quarters = 0, dimes = 0, nickels = 0, pennies = 0;        

int main() {
	printf("How many pennies do you have?  ");
	fgets(answer, sizeof(answer), stdin);
	sscanf(answer, "%d", &cents);

	if (cents > 99) {
		printf("Error: not less than $ 1.00 \n");
		return(1);
	} else if (cents < 1) {
		printf("Error: it's less than a penny penny \n");
		return(1);
	}

	while (1) {
		if (cents >= 25) {
			++quarters;
			cents -= 25;
		} else if (cents >= 10) {
			++dimes;
			cents -= 10;
		} else if (cents >= 5) {
			++nickels;
			cents -= 5;
		} else if (cents >= 1) {
			++pennies;
			--cents;
		} else if (cents == 0) {
			break;
		}
	}

	printf("%d quarters %d dimes %d nickels %d pennies\n",
		quarters, dimes, nickels, pennies);

	return(0);
}
