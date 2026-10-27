#include <stdio.h>

int main(void){
	// Write a program that finds the largest and smallest from 4 intergerst using the minmal number of if statements

	int a, b , c, d;
	printf("Eneter 4 integers: \n");
	scanf("%d%d%d%d", &a, &b, &c, &d);

	if (a>b && a>c && a>d){printf("Largetst: %d\n", a);}
	else if (b > a && b>c && b>d){printf("Largest: %d\n",b);}
	else if (c > a && c>b && c>d){printf("Largest: %d\n",c);}
	else {printf("Largest: %d\n", d);}

	
	if (a<b && a<c && a<d){printf("Smallest: %d\n", a);}
	else if (b<a && b<c && b<d){printf("Smallest: %d\n",b);}
	else if (c<a && c<b && c<d){printf("Smallest: %d\n",c);}
	else {printf("Smallest: %d\n", d);}
}
