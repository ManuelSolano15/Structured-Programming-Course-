/*Chapter4ex01: write a program to print your name, social security number, and date birth*/

#include <stdio.h>

int main()
{
    char name[100], ssn[100], db[100];
  
    printf("What is your name?\n");
    gets(name);
    printf("what is your social security number?\n");
    gets(ssn);
    printf("what is your birthday date\n");
    gets(db);
    
  
    
    printf("****************************************************************************************************\n");
    printf("*name: %s \n", name);
    printf("*Social Security number: %s \n", ssn);
    printf("*Birthday date: %s \n",db);
    printf("*****************************************************************************************************");

   
    return 0;
}
