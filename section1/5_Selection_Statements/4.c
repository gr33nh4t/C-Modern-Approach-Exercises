#include <stdio.h>

int main(void){
	// A program displays the description for the wind using simplified version of Beaufort scale

	int speed;
	printf("Enter the speed in knots: \n");
	scanf("%d", &speed);

	if (speed < 1){printf("Calm\n");}
	else if (speed < 4){printf("Light air\n");}
	else if (speed < 28){printf("Breeze\n");}
	else if (speed < 48){printf("Gale\n");}
	else if (speed < 64){printf("Storm\n");}
	else if (speed > 63){printf("Hurricane\n");} 

}
