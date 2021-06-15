/*Chapter5ex06: write a program that takes an integer as the number of minutes, 
and outputs the total hours and minutes. (90 minutes = 1 hour 30 minutes).*/

#include <stdio.h>

int main()
{
    int min, hrs;
    
    printf("how many minutes is it?\n");
    scanf ("%i", &min);
    
    if (min<60){
        printf("0 hour, %i minutes", min);
    }
    
    if (min>59){
        hrs=min/60;
        min=min%60;
        printf("%i hours, %i minutes",hrs, min);
    }
        
    return 0;
}
