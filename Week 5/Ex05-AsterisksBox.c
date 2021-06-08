//Dibujar un cuadro de asteriscos de 4x4


#include <stdio.h>

int main()
{
    int s1,s2; // s1=side of a square 1 - s2=side of a square 2  
    
    for(s1=1; s1<=4; s1++){
        for(s2=1; s2<=4; s2++){
           printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
