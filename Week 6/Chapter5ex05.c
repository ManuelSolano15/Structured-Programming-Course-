/*Chapter5ex05: Write a program that takes hours and minutes as input,
and them outputs the total number of minutes. (1 hour 30 minutes = 90 minutes).*/

#include <stdio.h>

int main()
{
    int hr,min;
    printf("how many hours is it? ?\n");
    scanf("%i", &hr);
    printf("how many minutes is it?\n");
    scanf("%i", &min);
    
    hr=hr*60;
    min=hr+min;
    
    printf("it's %i minutes in total", min);

    return 0;
}
