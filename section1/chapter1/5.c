#include <stdio.h>

int main(void)
	/* Write a program asks the user to enter a value to x, then display the value of polynomail*/

	int x;
	
	printf("Enter a valueof x");
	scanf("%d", &x);
	
	int polynomial = (3 * x * x * x * x * x) +  (2 * x * x * x * x) - (5 * x * x * x) - (2 * x * x)  + (7 * x) - 6;
	printf("The value of the polynomial is: %d\n",polynomial);
 
