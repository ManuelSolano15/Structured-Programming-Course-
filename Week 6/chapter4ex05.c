/*chapter4ex05:Write a program that deliberaty makes the following mistakes:
Prints a floating-point number using the %d conversion.
Prints an integer using %f the conversion. 
Prints a character using the %d conversion.*/

#include <stdio.h>

int main()
{
    float n1=1.5;
    int n2=1;
    char n3="j";
    
    printf("%d \n", n1);
    printf("%f \n", n2);
    printf("%d \n",n3);


    return 0;
}
