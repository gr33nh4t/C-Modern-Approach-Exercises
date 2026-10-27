#include <stdio.h>

int main(void){
	// Converting numerical grade into a letter grade.
	
	int grade_tens, grade;
	printf("Enter numerical grade: \n");
	scanf("%d", &grade);

	if (grade <= 100 && grade >=0){grade_tens = grade / 10;}
	
	switch(grade_tens){
		case 10:
		case 9:	
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		case 5: case 4: case 3: case 2: case 1: case 0:
			printf("F");
			break;
		default: printf("Illegal grade");
	}


	

}
