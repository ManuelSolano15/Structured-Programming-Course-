/*Chapter07ex04: Write a program to add an 8% sales tax to a given amount and round
the result to the nearest penny.*/

#include <stdio.h>

int main()
{
    char answer [1000];
    float price, fp; //fp= final price:
    
    printf ("What is the price without taxes of the product? \n");
    fgets(answer, sizeof(answer), stdin);
    sscanf (answer, "%f", &price);
    
    fp=price+(price*0.08);
    
    printf("the price with tax is: %.1f $ ", fp);
    return 0;
}
