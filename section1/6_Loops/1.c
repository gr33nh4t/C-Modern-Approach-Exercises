#include <stdio.h>

int main(void){
	// Display the largest that user had entered.

	float num=0.0f, large_num=0.0f;
	
	do {
		printf("Enter a number: \n");
		scanf("%f", &num);
		if (num > large_num){large_num=num;}
	}while (num>0);
	
	printf("The largest number is %0.2f", large_num);

}
