/*Chapter07ex05: Write a program to tell if a number is prime.*/

#include <stdio.h>

int main()
{
    char answer [1000];
    int i,number, cont=0;
    
    printf ("put a positive integer number \n" );
    fgets (answer, sizeof(answer), stdin);
    sscanf (answer, "%d", &number);
    
    for(i=1; i<=number; i++){
        if(number%i==0){
            cont++;
        }
    }
    
    if (cont>2){
        printf("the number is not prime");
    }
    else{
         printf("the number is prime");
    }
    

    return 0;
}
