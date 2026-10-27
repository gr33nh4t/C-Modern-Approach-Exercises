#include <stdio.h>

int main(void){
	// A program that asks the user for 24-hour time, then displays it in 12-hour form
	
	// 24 hour form = h24, 12 hour form = h12
	int h24, h12, min;
	printf("Enter a  24-hour time : \n");
	scanf("%d :%d",&h24, &min);

	if (h24 >= 24 || min > 60){printf("%d:%d not a valid hour\n", h24, min);}
	else if (h24 >= 12){
		if (h24 > 12){h12 = h24-12;}
		printf("Equivalent 12-hour time: %d:%d PM\n", h12, min);
	}
	else {
		if (h24 == 0){h12=12;}
		else {h12 = h24;}
		printf("Equivalent 12-hour time: %d:%d AM\n", h12, min);
	}
}
