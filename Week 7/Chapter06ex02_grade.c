/*Chapter06ex02: A professor generates letter grades using Table 6-3.
Given a numeric grade, print the letter.*/

#include <stdio.h>

int main()
{
    char answer[1000];              
    int grade;

    printf("What is the rating? \n ");     
    fgets(answer, sizeof(answer), stdin);
    sscanf(answer, "%d", &grade);


    if (grade <= 60) {
        printf("F");
    }
    if (grade <=70 && grade>60) {
        printf("D");
    }
    if (grade<= 80 && grade>70) {
        printf("C");
    }
    if (grade<=90 && grade>80) {
        printf("B");
    }
    if (grade <=100 && grade>90) {
        printf("A");
    }

    return 0;
}