#include <stdio.h>

int main(void){
	// displays all the squares to number a user entered.

	int num, square=0, n=2;
	printf("Enter a number: \n");
	scanf("%d", &num);

	while (num >= square){
		square=n*n;
		n++;
		if (square%2==0){printf("%d\n",square);}
	}

}
