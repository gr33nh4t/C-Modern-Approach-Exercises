#include <stdio.h>

int main(void){
	// A program that asks the user for 24-hour time, then displays it in 12-hour form

	// 24 hour form = h24, 12 hour form = h12
	int h24, h12, min;
	 period = "AM";
	printf("Enter a  24-hour time : \n");
	scanf("a%d :%d", h24, min);

	if (h24 > 12){period = "PM"; h12 = h24-12;}
	else if (h24 == 12){period = "PM";}
	else if (h24 == 0){h12 = 12;}
	else {h24 = h12;}

	printf("Equivalent 12-hour time: %d:%d %s\n", h24, min, period);

}
