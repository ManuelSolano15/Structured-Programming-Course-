/*Chapter07ex06:Write a program that takes a series of numbers and counts the number of positive and negative values.*/


#include <stdio.h>

int main()
{
    char answer[100];
    int serie=0; // number series 
    int end;  //end of series
    float number;
    printf ("How many numbers are you going to place?\n");
    fgets(answer, sizeof(answer), stdin);
    sscanf (answer, "%d", &end);

    do{
        printf ("Put a number:\n");
        fgets(answer, sizeof(answer), stdin);
        sscanf (answer, "%f", &number );
        serie=serie+1;
    } while (serie=end);
    
    printf ("%d. \n", serie);
    



    return 0;
}
