#include <stdio.h>

int main(void){
	// Modify this program so the user can enter any number of dates and stops when the user enters 0/0/0
	// Write a program that take two dates then displays which is earlier
	
	// m, d, y is a user input.
	int m,d,y,early_month=0,early_day=0,early_year=0;

	while (1) {
		printf("Enter a date (mm/dd/yy):\n");
		scanf("%d /%d /%d", &m, &d, &y);
		if (m +  d + y == 0){break;}

		// Why multiplaing by 31 days? Take these dates 12/31/3 the last day of year 3 and 1/1/4 and the first day of year 4.
		// 31 + 30*12 + 30*12*3 = 1471;
		// 1 + 30*1 + 30*12*4 = 1471;
		// So we consider the days to be 31 days.
		else if (early_month+early_day+early_year == 0 || (d+(31*m)+(12*31*y) < early_day+(early_month*31)+(12*31*early_year))){
			early_month = m; 
			early_day = d; 
			early_year = y;
		}
		else {continue;}

	} 
	printf("Earliest date is %d/%d/%d\n", early_month, early_day, early_year);
}
