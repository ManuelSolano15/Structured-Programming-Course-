/*Chapter06ex06: Write a program that, given the number of hours an employee 
worked and the hourly wage, computes the employee's weekly pay. 
Count any hours over 40 as overtime at time and a half.*/

#include <stdio.h>

int main()
{
    char answer [100];
    int hour, extra_hours; 
    float hourly, salary, extra_salary; 
    
    printf("How many hours do you work a week and how much do you pay per hour? \n");
    fgets(answer, sizeof(answer), stdin);
    sscanf (answer, "%d %f", &hour, &hourly);
    if (hour<41){
       salary=hour*hourly;
       printf("His salary per week is; %f ", salary);
   }
   else {
       if (hour>40){
       extra_hours=hour-40;
       extra_salary=(hourly+(hourly/2))*extra_hours;
       salary= (hourly*40)+extra_salary;
       printf("His salary per week is; %f ", salary);
       }
       
       
   }
    


    return 0;
}
