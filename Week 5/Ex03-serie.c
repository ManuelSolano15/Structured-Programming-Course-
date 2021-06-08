// Calcular el número con 10 operaciones de esta serie 4/1 - 4/3 + 4/5 - 4/7 + 4/9 ...


#include <stdio.h>

int main()
{
    int i, p;
   
   for(i=1; i<=20; i++){
       p=i/3;
       
       if(p=0){
           printf("+4/%i\n",i);
       } 
       else {
            printf("-4/%i\n",i);
       }
       
       i=i+1;
   } 
   
   
    return 0;
}
