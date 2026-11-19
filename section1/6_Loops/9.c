#include <stdio.h>

int main(void){
	// Modify the program so the user enters the number of payments and then diplays the balance remaining after each of these payments.
	// Write a program that calculate the remaininh balance on a loan after the first, second, and third monthly payment, display 2 digits after the desimal point
        float loan, interest_rate, monthly_pay;
	int num_pay;

    	printf("Enter the amount of loan: \n");
    	scanf(" %f", &loan);	
	printf("Enter the interest rate: \n");
	scanf("%f", &interest_rate);
	printf("Enter the monthly payment: \n");
	scanf("%f", &monthly_pay);
	printf("Enter the number of payments:\n");
	scanf("%d", &num_pay);

	float monthly_rate = (interest_rate/100.0)/12.0;

	float balance=loan;
	/* conting the balance*/
	for(int i=1; i <= num_pay; i++){
		balance= (balance*(1+monthly_rate)) - monthly_pay;
		printf("Balance remaining after the payment %d: %.2f\n", i, balance);
	}	
}	
