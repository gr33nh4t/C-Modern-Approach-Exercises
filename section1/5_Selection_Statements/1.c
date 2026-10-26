#include <stdio.h>

int main(void){
	// a program that that calculate how many digits in a number contain.

	int num, digits=0;
	printf("Enter a number: \n");
	scanf("%d", &num);
	
	if (num <10){digits = 1;}
	else if (num < 100){digits = 2;}
	else if (num < 1000){digits = 3;}
	else if (num < 10000){digits = 4;}
	else if (num < 100000){digits = 5;}

	printf("The number %d has %d digits.", num, digits);

}
