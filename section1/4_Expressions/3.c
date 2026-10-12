#include <stdio.h>

int main(void){
	//rewrite the program from problem 2 without using arithmetic.
	int ones, tens, hunds;
	
	printf("Enter 3 digits number: \n");
	scanf("%1d%1d%1d", &hunds, &tens, &ones);
	
	printf("The reversal is: %d%d%d\n", ones, tens, hunds);
	return 0;
}
