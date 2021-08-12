/*Chapter08ex02:Exercise 8-2: The total resistance of n resistors in parallel is:
1/R= 1/R1 + 1/R2 + 1/R3 +...+ 1/Rn*/

#include <stdio.h>

char answer[1000];            

float resistance, accumulated;        

int main() {

	while (1) {
	
		printf("What is the amount in ohms? (enter 0 to end the sequence): ");
		fgets(answer, sizeof(answer), stdin);
		sscanf(answer, "%f", &resistance);

		if (resistance == 0.0) {
			printf("Result: %0.04f\n", 1.0 / accumulated);
			return(0);
		}
		accumulated += 1.0 / resistance;

	}
return 0;
}
