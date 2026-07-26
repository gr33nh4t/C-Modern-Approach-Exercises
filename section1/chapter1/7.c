#include <stdio.h>

int main(void){
	/* Write a program that takes an amount of  dollars then show how to pay that amount using tge smallest number of $20, $10, $5, $1*/

	int money;
	printf("Enter a  dollar amount:");
	scanf("%d", &money);

	/* Number of  $20, $10, $5, $1*/
	int num_20 =  money /20;
	int num_10 =  (money - (num_20 * 20))/ 10;
	int num_5 = (money - (num_20 * 20) - (num_10 * 10)) / 5;
	int num_1 = money - (num_20 *20) - (num_10 *10) - (num_5 * 5) 

	printf("$20 Bills: %d\n$10 Bills: %d\n$5 Bills: %d\n$1 Bills: %d\n", num_20, num_10, num_5, num_1);

