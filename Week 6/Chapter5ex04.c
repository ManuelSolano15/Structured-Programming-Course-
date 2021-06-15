//Chapter5ex04: Write a program that converts kilometers per hour to miles per hour.

#include <stdio.h>

int main()
{
    float kph, mph; //kph=kilometers per hour - mph=miles per hour
    
    printf(" _______________________________________\n");
    printf("|                                       |\n");
    printf("| kilometers per hour to miles per hour |\n");
    printf("|_______________________________________|\n");
    printf("What is the speed in kilometers per hour?\n");
    scanf("%f", &kph);
    
    mph=kph*0.6213712;
    printf("speed is: %f mph",mph);

    return 0;
}
