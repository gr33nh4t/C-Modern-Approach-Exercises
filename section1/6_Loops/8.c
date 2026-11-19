#include <stdio.h>

int main(void){
	// A program that prints a one month calendar. The user specifies the number of days in month and the day of the week on which the month begins.
	
	int days, start, day;
	printf("Enter number of days in month:\n");
	scanf("%d", &days);
	printf("Enter starting day of the week (1=Sum, 7=Sat):\n");
	scanf("%d", &start);

	for(int i=2-start; i<=days;i++){
	// Examine if i less then leave space if not: print number or \n
		if (i<1){printf("   ");}
		else{
			printf("%2d ",i);
			if ((i+start-1)%7 == 0){printf("\n");}
		}
	}
	printf("\n");

}
