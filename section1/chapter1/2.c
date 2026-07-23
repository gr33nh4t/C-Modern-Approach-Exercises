#include <stdio.h>
#define PI 3.14f
#define FRACTION (4.0f/3.0f)

int main(void){
	/* write a program that computes the volume of a sphere with a 10-meter radius.*/
	int r = 10;
	float v = FRACTION * PI * r * r * r;
	printf("The valume of the sphere is %0.2f\n", v);
	return 0;
}

