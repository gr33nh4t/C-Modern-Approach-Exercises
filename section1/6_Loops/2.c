#include <stdio.h>

int main(void){
	// A program displays the GCD for tow numbers.

	int num1, num2, reminder=0;
	printf("Enter two integers:\n");
	scanf("%d%d", &num1, &num2);

	while (num2 !=0){
		reminder = num1 % num2;
		num1 = num2;
		num2 = reminder;
	}
	printf("Greatest Common Diviser : %d\n", num1);


}
