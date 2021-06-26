/**Chapter06ex01:Write a program to find the square of the distance between two 
points. (For a more advanced problem, find the actual distance. This problem 
involves u sing the standard function sqrt. Use your help system to find out more 
about how to use this function.)*/

#include <stdio.h>
#include<math.h>

int main()
{
    char answer[1000];
    double x1, x2, y1, y2, D; //D=distance - a

    printf("what is the first point (place shape x1 y1)? \n");
    fgets(answer, sizeof(answer), stdin);
    sscanf (answer, "%lf %lf", &x1, &y1);
    
    printf("what is the second point place shape y1 y2 ? \n");
    fgets(answer, sizeof(answer), stdin);
    sscanf (answer, "%lf %lf", &x2, &y2);
    
   D=sqrt ((pow ((x2-x1),2))+(pow ((y2-y1),2)));
   
   printf("The distance is:  %.2lf", D);
    

    return 0;
}

