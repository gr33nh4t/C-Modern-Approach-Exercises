#include <stdio.h>
#define  TAX 0.05f

int main(void){
	/* Write a program asks the user to enter dollar-and-cents amount, then display the amount with %5 tax added.*/

	float money;
	float money_tax;
	
	printf("Enter an amount:");
	scanf("%f", &money);

	money_tax = (money * TAX) + money;
	printf("With tax added: $%0.2f\n", money_tax);
	return 0;
	
}

