#include <stdio.h>

int main(void){
	/* Write a program that calculate the remaininh balance on a loan after the first, second, and third monthly payment, display 2 digits after the desimal point*/
    float loan, interest_rate, monthly_pay;

    printf("Enter the amount of loan: ";
    scanf(" %f", &loan);	
	printf("Enter the interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter the monthly payment: ");
	scanf("%f", &monthly_pay);

	/* conting the balance*/
	float month1 = (loan*interest_rate) - monthly_pay;
	float month2 = (month1 *interest_rate) - monthly_pay;
	float month3 = (month * interest_rate) - monthly_pay;

	
	printf("Balance remaining after the first payment: %f", month1);
	printf("Balance remaining after the second payment: %f", month2);
	printf("Balance remaining after the third payment: %f ", month3);
}	
