//Calcular el área y el volumen de un cilindro .

#include <stdio.h>

int main() {
  
  float r, h, Vol, A;//r=radius - h=height - Vol=Volume - A=Area
  printf("we will calculate the area and volume of a circle?\n ");
  printf("What is the height of the cylinder?\n ");
  scanf("%f",&h);
  printf("What is the radius of the cylinder base?\n");
  scanf("%f",&r);
  A=(2*3.1416*r*h)+(2*3.1416*(r*r));
  Vol=3.1416*(r*r)*h;

  printf("Your Area is: %.2f \n", A);
  printf("Your Volume is: %.2f \n", Vol);

  return 0;
}