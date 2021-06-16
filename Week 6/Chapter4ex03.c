/*Chapter4ex03: Write a program to compute the area and perimeter of a 
rectangle with a width of three inches and a height of five inches. 
What changes must be made to the program so that it works for a rectangle 
with a width of 6.8 inches and a length of 2.3 inches?*/

#include <stdio.h>

int main()
{
    int w=3, h=5, a, p ; // w=width - h=heigh - a=area - p=perimeter
    
    printf("***************************************\n");
    printf("*  Area and perimeter of a rectangle  *\n");
    printf("*  width=3 in         height=5 in     *\n");
    printf("***************************************\n");
    a=w*h,
    p=(2*w)+(2*h);
    
    printf("The area is:  %i in^2\n", a);
    printf("The perimeter is:  %i in", p);
    return 0;
}

/*first we will have to declare the variables with "float" 
and change the value to "h" and "w" */