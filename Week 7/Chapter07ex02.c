/*Chapter07ex02: Write a program to perform date arithmetic such as how many days
there are between 6/6/90 and 4/3/92. Include a specification and a code design*/

#include <stdio.h>


int leapYear(int year) {

    if (((year % 4) == 0 && (year % 100) != 0) || (year % 400) == 0)
        return 1;
    else
        return 0;

}


int daysBetweenDates(int start_date[], int end_date[]) {
    int days = 0; 
    int month_counter, year_counter; 

   
    for (year_counter = start_date[2]; year_counter <= end_date[2];
            year_counter += 1) {

        if (year_counter == start_date[2]) 
            month_counter = start_date[0]; 
        else
            month_counter = 1; 

        while (month_counter <= 12) {

            if (year_counter == end_date[2] && month_counter == end_date[0])
                break;

            switch (month_counter) {

            case 1:
                days += 31;
                break;
            case 2:
                days += 28;
                if (leapYear(year_counter))
                    days += 1;
                break;
            case 3:
                days += 31;
                break;
            case 4:
                days += 30;
                break;
            case 5:
                days += 31;
                break;
            case 6:
                days += 30;
                break;
            case 7:
                days += 31;
                break;
            case 8:
                days += 31;
                break;
            case 9:
                days += 30;
                break;
            case 10:
                days += 31;
                break;
            case 11:
                days += 30;
                break;
            case 12:
                days += 31;
                break;
            default:
                break;

            }

            month_counter += 1;
        }

    }

    days += (end_date[1] - start_date[1]);

    return days;
}


int checkDates(int start_date[], int end_date[]) {
    if (start_date[2] > end_date[2])
        return 1;

    if (start_date[2] == end_date[2] && start_date[0] > end_date[0])
        return 1;

    if (start_date[2] == end_date[2] && start_date[0] == end_date[0]
            && start_date[1] > end_date[1])
        return 1;

    else
        return 0;

}

int main() {
    int start_date[3];
    int end_date[3];
    char last_day[3];
    int add_last_day;


    printf("Please enter in the start date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &start_date[0], &start_date[1], &start_date[2]);

    printf("Please enter in the end date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &end_date[0], &end_date[1], &end_date[2]);

    if(checkDates(start_date, end_date)){
        printf("Invalid Dates.\n");
        return 1;
    }

    printf("Should the last day be counted? (Y/N) ");
    scanf("%s", last_day);

    if(last_day[0] == 'Y' || last_day[0] == 'y')
        add_last_day = 1;
    else
        add_last_day = 0;


    printf("between %d/%d/%d and %d/%d/%d there are %d days.\n", start_date[0],
            start_date[1], start_date[2], end_date[0], end_date[1], end_date[2],
            daysBetweenDates(start_date, end_date) + add_last_day);

    return 0;
}

//proyecto sacado de: 
//https://stackoverflow.com/questions/26544410/undefined-behaviour-counting-days-exercise-7-2-practical-c-programming 
