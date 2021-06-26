/*Chapter08ex05:Write a program that reads a character and prints 
out whether or not it is a vowel or a consonant..*/

#include <stdio.h>
int main() 
{
    char answer [10];
    char l; //l=letter
    printf ("put a letter \n");
    fgets(answer, sizeof(answer), stdin);
    sscanf(answer, "%c", &l);
    
    if  (l=='A' || l=='E' || l=='I' || l=='O' || l=='U' || l=='a' || l=='e' || l=='i' || l=='i' || l=='o' || l=='u' ) {
        printf("%c is vowel \n", l);
    }
   else {
       printf("%c is consonant  \n", l);
   }
   
    
  return 0;
}