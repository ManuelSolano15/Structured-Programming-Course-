/*Chapter06extra:program that displays the result of the equation of
third degree y = ax ^ 3 + bx ^ 2 + cx + for a value of x. 
introducing the value of "x" and of the other coefficients. */

#include <stdio.h> 

int main() { 
    
char answer [1000];    
float a, b, c, d, x, y; 

printf("polynomial evaluation :\n"); 
printf("Value of the coefficients a, b, c and d: "); 
fgets(answer, sizeof(answer), stdin);
sscanf(answer,"%f%f%f%f", &a, &b, &c, &d);

printf ("Enter the value of the variable x :");  
fgets(answer, sizeof(answer), stdin);
sscanf(answer,"%f", &x);

y = a*x*x*x + b*x*x + c*x + d; 

printf ("The result of the polynomial %.2f x^3 + %.2f x^2", a, b); 
printf (" + %.2f x + %.2f for x=%.2f is: %.2f\n", c, d, x, y); 

return 0;
}

