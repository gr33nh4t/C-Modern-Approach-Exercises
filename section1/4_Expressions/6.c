#include <stdio.h>

int main(void){
	// FInding the check digit for the European Article Number (EAN) which is 13 digit long.	

	int d, i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5, first_sum, second_sum, total ;
	printf("Enter the first 12 digits of a EAN: \n");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &i6, &j1, &j2, &j3, &j4, &j5);
	
	first_sum = i1 + i3 + i5 + j1 + j3, j5;
	second_sum = d + i2 + i4 + i6 + j2 + j4;
	total = 3 * first_sum + second_sum; 

	printf("Check digit is: %d\n", 9 - ((total - 1) % 10));

}
