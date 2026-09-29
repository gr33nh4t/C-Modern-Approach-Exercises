#include <stdio.h>

int main(void){
	// Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxxx
	int nu1, nu2, nu3;	

	printf("Enter phone number [(xxx) xxx-xxxx]: \n");
	scanf(" (%d ) %d -%d",&nu1, &nu2, &nu3);

	printf("You entered %d.%d.%d\n", nu1, nu2, nu3);

	return 0;

}
