#include <stdio.h>
#include <stdlib.h>
void function(int year);

/* ANSI/ISO C function prototyping */
int main(void) 
{
	int year;
	printf("When were you born? (year)\n");
	printf("Let's check it out.\n");
	printf("Please enter the year of birth : ");/*get input from the user  */
	scanf("%d", &year);							
	printf("\n");
	function(year);
	getchar();
	return 0;
}

void function(int year)       /* start of function definition */
	{
		double sec;
		sec = 3.156e7 * (2018 - year);
		printf("year = %d\n", year);

		printf("It's been about %.3e seconds since you were born\n", sec);
		printf("And %.3e can be expressed like this : %d sec\n", sec, (int)sec);
		printf("It's long long time\n");
		system("pause");
	}
