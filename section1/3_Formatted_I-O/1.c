#include <stdio.h>

int main(void){
	// Write a program that accepts a date form the user in the form mm/dd/yyyy and then displays it in the form yyyymmdd
	int year, month, day;

	printf("Enter a date(mm/dd/yyyy): \n");
	scanf("%d /%d /%d", &year, &month, &day);
	printf("You entered the date %d%d%d \n", year, month, day);

	return 0;

}
