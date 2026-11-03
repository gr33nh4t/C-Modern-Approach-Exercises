#include <stdio.h>

int main(void){
	// Write a program that asks user to enter a time (expressed in hour and minutes, using the 23hour clock). The program then displays the departure and arrival times for the flight whose departuretime is closest to that entered by the user.
	
	int h, min;
	printf("Enter a 24-hour time: \n");
	scanf("%d :%d", &h, &min);

	int total_min=h*60+min;

	// total minutes for departure time
	// 8*60=480
	// 9*60+43=583
	// 11*60+19=679
	// 12*60+47=767
	// 14*60=840
	// 15*60+45=945
	// 19*60=1140
	// 21*60+45=1305

	// The way to know if time is closer to what, since the numbers are orded from early to late, take the mid point of the first one and the second one if the user's time is smaller then the first time is closer. If not, we compare it to the mid point of second and third ... and so on.
	printf("Closest departure time is ");
	if (((480+583)/2) >= total_min){printf("8:00 a.m., arriving 10:16 a.m.");}
	else if(((583+679)/2) >= total_min){printf("9:43 a.m., arriving 11:52 a.m.");}
	else if (((679+767)/2) >= total_min){printf("11:19 p.m., arriving 1:31 p.m.");}
	else if (((767+840)/2) >= total_min){printf("12:47 p.m., arriving 3:00 p.m.");}
	else if (((840+945)/2) >= total_min){printf("2:00 p.m., arriving 4:08 p.m.");}
	else if (((945+1140)/2) >= total_min){printf("3:45 p.m., arriving 5:55 p.m.");}	
	else if (((1140+1305)/2) >= total_min){printf("7:00 p.m., arriving 9:20 p.m.");}
	else {printf("9:45 p.m., arriving 11:58 p.m.");}
	


}
