#include <stdio.h>

int main(void){
	// Generalize programming project 1 from chapter 4, so it can deal with one, two, three, or more digits. Stopping when it reaches 0 
	int digits=0, n;
	
	printf("Enter a nonnegative integer:\n");

	do {
		scanf("%1d",&n);
		digits++;
	} while (n>0);


}
