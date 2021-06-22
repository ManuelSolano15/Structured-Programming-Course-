/*Exercise 6-5: A leap year is any year divisible by 4, unless the year is divisible by 
100, but not 400. Write a program to tell if a year is a leap year.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int year;
    
    printf("Enter the year (with numbers)\n");
    scanf("%i", &year);
    if (year%4==0 && year%100 !=0 || year%400==0) {
       printf("the year %i is leap", year); 
    }
    else{
        printf("the year %i is not biciest", year);
    }

    return 0;
}
