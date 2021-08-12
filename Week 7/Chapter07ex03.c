/*Chapter07ex03: A serial transmission line can transmit 960 characters each second.
Write a program that will calculate the time required to send a file,
given the file's size. Try the program on a 400MB (419,430,400 byte)
file. Use appropriate units. (A 400MB file takes days.)*/

#include <stdio.h>

/*#define DEBUG*/
#undef DEBUG

const int CPS = 960;            

const int MINUTE = 60;              
const int HOUR   = 60 * 60;         
const int DAY    = 60 * 60 * 24;    

int ts; //total seconds              

int days, hours, minutes, seconds;                    

char answer[ 100 ];               

int filesize;                  

int main() {

	printf("Enter file size in bytes: ");
	fgets(answer, sizeof(answer), stdin);
	sscanf(answer, "%d", &filesize);

#ifdef DEBUG
	printf("DEBUG:main(): filesize is %d\n", filesize);
#endif

	ts = filesize / CPS;

#ifdef DEBUG
	printf("DEBUG:main(): total_seconds is %d\n", ts);
#endif

	
	days = ts / DAY;

	ts = ts % DAY;

#ifdef DEBUG
	printf("DEBUG:main(): days is %d\n", days);
	printf("DEBUG:main(): remainder is %d\n", ts);
#endif


	hours = ts / HOUR;

	ts = ts % HOUR;

#ifdef DEBUG
	printf("DEBUG:main(): hours is %d\n", hours);
	printf("DEBUG:main(): remainder is %d\n", ts);
#endif


	minutes = ts / MINUTE;
	seconds = ts % MINUTE;

#ifdef DEBUG
	printf("DEBUG:main(): minutes is %d\n", minutes);
	printf("DEBUG:main(): seconds is %d\n", seconds);
#endif

	printf("%d days, %d hours, %d minutes, %d seconds\n",
			days, hours, minutes, seconds);

	return(0);
}