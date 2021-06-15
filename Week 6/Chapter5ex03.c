//Chapter5ex03:Write a program that prints the perimeter of a rectangle given its height and width. 

#include <stdio.h>
#include <math.h>
int main()
{
    float h, w, s, P, w2, h2; //h=high - w=width - s=side of the triangle - P=perimeter
                              
    printf("What is the height of the triangle?\n");
    scanf("%f",&h);
    printf("What is the width of the triangle?\n");
    scanf("%f",&w);
    h2=pow(h, 2);
    w2=w/2;
    w2=pow(w2, 2);
    s=sqrt(h2+w2);
    P=(s*2)+w;
    printf("The perimeter is: %f", P);
    return 0;
}
