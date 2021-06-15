//Chapter5ex02: Write a program to calculate the volume of a sphere.

#include <stdio.h>

int main()
{
      printf("******************************************\n");
    printf("*we will calculate the volume of a sphere*\n");
    printf("******************************************\n");
    printf("\n");
    float D,A,r; //D=diameter - A=area - r=radius
    printf("what is the diameter of the sphere?\n");
    scanf("%f",&D);
    r=D/2;
    A=((4*3.1416)/3)*(r*r*r);
    printf("the area of the sphere is: %.3f",A);
    return 0;

    return 0;
}
