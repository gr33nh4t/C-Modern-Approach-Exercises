#include <stdio.h>

int main(void){
	// a program that displays the taks due, after enterning the taxeble income.

	//atxt = amount tax
	float  income, atax;
	printf("Enter the amount of taxable income: \n");
	scanf("%f", &income);

	if (income <=  750){atax = (income*0.01);}
	else if (income <= 2250){atax = 7.5  + (income*0.02);}
	else if (income <= 3750){atax = 37.5 + (income*0.03);}
	else if (income <= 5250){atax = 82.5 + (income*0.04);}
	else if (income <= 7000) {atax = 142.5 + (income*0.05);}
	else if (income >  7000){atax = 230 + (income*0.06);}

	printf("The tax due: %0.2f\n", atax);
}
