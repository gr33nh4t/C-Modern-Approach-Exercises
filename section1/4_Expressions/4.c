#include <stdio.h>

// My way in converting Decimal to Ocatl will gonna be like take the num and divided with the biggest exponent of 8 which is 8^4 in this ex. then the resualt is the MSB, and the reminder is the next number in the same step but with 8^3 and so on.

// An exponential function
int power(int base, int pow){
	int result=1;
	for (int i = 0; i < pow; i++){
		result*=base;
	}
	return result;
}

// The reminder after some computes
int reminder(int num, int pow){
	int re=num;
	for (int i=4; i > pow;){
		re = re%power(8,i);
		i--;	
	}
	return re;
}



int main(void){
	//Write a program that reads an integer from the user and diplay a octal nuber in 5 digits.
	int num;

	printf("Enter a number between 0 and 32767:\n");
	scanf("%d", &num);
	int n1 = (num)/(power(8,4));
	int n2 = (reminder(num,3))/(power(8,3));
	int n3 = (reminder(num,2))/(power(8,2));
	int n4 = (reminder(num,1))/(power(8,1));
	int n5 = reminder(num,0)/1; 
	printf("The octal, your number is: %d%d%d%d%d\n", n1, n2, n3, n4, n5);


}
