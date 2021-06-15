//Chapter5ex01: Write a program that converts Centigrade to Fahrenheit.

#include <stdio.h>

int main()
{
    float C, F; //C=Centigrades degrees  - F= Fahrenheit degrees
    printf("insert the number of degrees celsius\n");
    scanf("%f",&C);
    
    F=((9*C)/5)+32;
    printf("in degrees Fahrenheit is: %.3f \n ",F); 
    

    return 0;
}
