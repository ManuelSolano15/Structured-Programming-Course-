/*Chapter08ex04:Write a program to average n numbers.*/

#include <stdio.h>
int main() 
{
    char answer[100];
    int n, i, m; //n=number - m=multiplication
    
    printf("What number does the multiplication table want to know?: \n");
    fgets(answer, sizeof(answer), stdin);
    sscanf(answer, "%d", &n);

    for (i = 1; i <= 10; ++i) {
      m=n*i;
    printf("%d * %d = %d \n", n, i, m);
    }
    
  return 0;
}