#include <stdio.h>

int main(void){
	// Write a program that asks to enter a two-digit number, then prints the number with its digits reversed.
	int ones, tens, num;
	printf("Enter a two-digit number: \n");
	scanf("%d", &num);
	ones = num % 10;
	tens = num /10;
	printf("The reversal is: %d%d \n", ones, tens);
	return 0;
}
