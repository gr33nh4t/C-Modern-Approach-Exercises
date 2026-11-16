#include <stdio.h>

int main(void){
	// Rearrange the square3.c chapter 6 so for loop initializes i, tests i, and increments i.

	int i,n,odd,square;

	printf("This program prints a table of squares. \n");
	printf("Enter number of entries in table: \n");
	scanf("%d",&n);

	for (square=1, i=1, odd=3;i<=n; ++i, square+=odd, odd+=2){
		printf("%10d%10d\n",i,square);
	}

}
