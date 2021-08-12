/*Chapter07extra:Program that reads a lowercase character and writes it in
  capital letters.*/ 

#include <stdio.h> 

int main() 
{ 
char answer[1000], lc, cl;
//lc=lowercase
//cl= capital letters

printf ("Enter a lowercase character:  "); 
fgets(answer, sizeof(answer), stdin);
sscanf(answer, "%c", &lc);

cl = lc - 32; 

printf ("The character %c in capital letters is %c\n", lc, cl); 
return 0;
} 