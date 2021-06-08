//Recibir una cantidad de segundos y mostrar su equivalente en el formato hrs.: min: seg.

#include <stdio.h>

int main()
{
    int seg,min,hrs,mr,sr;   //seg=seconds - min=minutes - hrs=hours - mr=minutes remainder
                             //sr =remaining seconds of the hour
   printf("Enter the number of seconds ");
   scanf("%i", &seg);
   
   if (seg<60){
       printf("00:00:%i", seg);
   }
   else {
       if (seg>=60 & seg<3600 ){
           min=seg/60;
           mr=seg%60;
           printf("00:%i:%i",min,mr );
       }
       else{
           if (seg>=3600){
              hrs=seg/3600;
              mr=seg%3600;
              min=mr/60;
              sr=mr%60;
              
              printf("%i:%i:%i",hrs,min,sr);
           }
       }
     
   }

    return 0;
}
