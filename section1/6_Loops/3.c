#include <stdio.h>

int main(void){
	// A program Reduce the program to the lowest form.

	// n = numerator and d = denominator
	int n, d, reminder;
	printf("Enter a fraction: \n");
	scanf("%d /%d", &n, &d);

	int num1 = n, num2 = d;

	printf("In lowest terms: ");
	if (n == 0){printf("0\n");}
	else if (d == 0){printf("Undefined! You can't divided by 0\n");}
	else {
		do {
			reminder = num1 % num2;
			num1 = num2;
			num2 = reminder;		
		} while (num2 != 0);
		
		printf("%d/%d\n", n/num1, d/num1);
	}
	
			 
	

}
