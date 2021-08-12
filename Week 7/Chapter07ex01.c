/*Chapter07ex01:Write a program to convert English units to metric 
(i.e., miles to kilometers, gallons to liters, etc.). Include a 
specification and a code design.*/

#include <stdio.h>

const float mk=1.6093, gl=3.7854, ic = 2.54, fm= 0.3048;
//mk=mile to kilometer
//gl=gallon to liter
//ic=Inch to centimeter
//fm= foot to meter
char answer[1000];            
char cr;    //conversion rate 
float uv;   //unit value
float result;               

int main() {
	while (1) {


        printf("\n valid units  \n");
		printf("-m=miles\n");
		printf("-g=gallons\n");
		printf("-i=inches\n");
		printf("-f=feet\n");
		printf("put the unit and then the quantity:");
		fgets(answer, sizeof(answer), stdin);
		sscanf(answer, "%c %f", &cr, &uv);
		
	
		if (cr == 'm') {
			result = uv*mk;
			printf("%f miles = %f kilometers\n", uv, result);
		} 
		else if (cr == 'g') {
			result = uv*gl;
			printf("%f gallons = %f liters\n", uv, result);
		} 
		else if (cr == 'i') {
			result = uv*ic;
			printf("%f inches = %f centimeters\n", uv, result);
		} 
		else if (cr == 'f') {
			result = uv*fm;
			printf("%f feet = %f meters\n", uv, result);
		} 
		
	}

}
