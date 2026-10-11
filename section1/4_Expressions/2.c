#include <stdio.h>

int  main(void){
	//Extand program 1 to 3 digits number
	
	int ones, tens, hunds, num;
	printf("Enter a three-digit number: \n");
	scanf("%d", &num);
	ones = num % 10;
	tens = (num % 100)/10;
	hunds = num /100;
	printf("The reversal is: %d%d%d \n", ones, tens, hunds);
	return 0;
}
