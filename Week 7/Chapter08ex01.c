/*Chapter08ex01: Print a checker board (8-b y-8 grid). Each square should be 5 -by-3 
characters wide. A 2-b y-2 example follows:
+-----+-----+ 
|     |     | 
|     |     | 
|     |     | 
+-----+-----+ 
|     |     | 
|     |     | 
|     |     | 
+-----+-----+  */

#include <stdio.h>

const int SW=5, RH=3, BW=8, BH=8;     
//SW=SQUARE WIDTH
//RH=ROW HEIGHT 
//BW=BOARD WIDTH
//BH=BOARD HEIGHT

int tsw, trw, trh, nr;
//tsw=this square width
//trw=this row width
//trh=this row height
//nr=numbers rows

int main(void) {

	for (nr = 0; nr < BH; ++nr) {
		for (trw = 0; trw < BW; ++trw) {
			printf("+");
			for (tsw = 0; tsw < SW; ++tsw) {
				printf("-");
			}
		}
		printf("+\n");

		for (trh = 0; trh < RH; ++trh) {
			for (trw = 0; trw < BW; ++trw) {
				printf("|");
				for (tsw = 0; tsw < SW; ++tsw) {
					printf(" ");
				}
			}
			printf("|\n");
		}
	}

	for (trw = 0; trw < BW; ++trw) {
		printf("+");
		for (tsw = 0; tsw < SW; ++tsw) {
			printf("-");
		}
	}
	printf("+\n");

	return(0);
}
