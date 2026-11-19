#include <stdio.h>

int main(void){
	// A program compute the value of e using number n entered by the user 

	int n;
	printf("Enter the value of n to computer the value of e: \n");
	scanf("%d", &n);
	
	float e=1;

	for (int i=1; i<=n; i++){
		int deno = 1;
		for (int j=1; j<=i; j++){deno *= j;}
		e +=(1.0f/deno);
	}
	printf("The value of e: %f\n", e);
}
