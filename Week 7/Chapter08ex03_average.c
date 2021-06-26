/*: Chapter08ex03:Write a program to average n numbers.*/

#include<stdio.h>

int main()
{
    char answer[1000];
    int n, i; //n=numbers 
    float sum = 0, result, a; //a=average

    printf("how many numbers are you going to average? \n");
    fgets(answer, sizeof(answer), stdin);
    sscanf(answer, "%d", &n);
    
    printf("Enter %d elements\n", n);
    for(i = 0; i < n; i++) {
        fgets(answer, sizeof(answer), stdin);
        sscanf(answer, "%f", &result);
        sum += result;
    }
    a=sum/n;
    printf("the average is: %.2f", a);
    
    return 0;
}
