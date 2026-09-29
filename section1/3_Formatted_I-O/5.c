#include <stdio.h>

int main(void){
	// Write a program that asks the user to enter the number from 1 to 16 (in any order) and then displays the numnbers in a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals.
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;

	printf("Enter the number from 1 to 16 in any order:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);
	
	printf("%d %d %d %d\n", n1, n2, n3, n4);
	printf("%d %d %d %d\n", n5, n6, n7, n8);
	printf("%d %d %d %d\n", n9, n10, n11, n12);
	printf("%d %d %d %d\n", n13, n14, n15, n16);

	printf("Rows sum: %d %d %d %d\n", n1+n2+n3+n4, n5+n6+n7+n8, n9+n10+n11+n12, n13+n14+n15+n16);
	printf("columns sums: %d %d %d %d\n", n1+n5+n9+n13, n2+n6+n10+n14, n3+n7+n11+n15, n4+n8+n12+n16);
	printf("Diagonal sums: %d %d\n", n1+n6+n11+n16, n4+n7+n10+n13);

	return 0;

}
