/*Chapter08ex06: Write a program that converts numbers to words. For example, 895 
results in "eight nine five. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char answer[100]; 
int i; 
int main(){
 

     printf("Put a number:  \n");
     fgets(answer, sizeof(answer),stdin);
     answer[strlen(answer)-1] = '\0';
   
     for (i = 0; i < strlen(answer); ++i) {
         switch(answer[i]) {
             case '0': {
                 printf("zero ");
                 break;
             }
             case '1': {
                 printf("one ");
                 break;
             }
             case '2': {
                 printf("two ");
                 break;
             }
             case '3': {
                 printf("three ");
                 break;
             }
             case '4': {
                 printf("four ");
                 break;
             }
             case '5': {
                 printf("five ");
                 break;
             }
             case '6': {
                 printf("six ");
                 break;
             }
             case '7': {
                 printf("seven ");
                 break;
             }
             case '8': {
                 printf("eight ");
                 break;
             }
             case '9': {
                 printf("nine ");
                 break;
             }
             default: { 
           printf("That's not a valid number\n");
           return(8);
             }
         }    
     }

 return 0;
}