#include <stdio.h>

int main(void){
	// A program asks about 2 digit number then prints English word for the number.

	int num, tens, ones;
	printf("Enter a two digit number:\n");
	scanf("%d", &num);
	
	tens = num / 10;
	ones = num % 10;

	printf("You entered the number ");

	if (num > 9 && num < 20){
		switch (num){
			case 11: printf("Eleven"); break;
			case 12: printf("Twenlve"); break;
			case 13: printf("Thirteen"); break;
			case 14: printf("Fourteen"); break;
			case 15: printf("Fifteen"); break;
			case 16: printf("Sixteen"); break;
			case 17: printf("Seventeen"); break;
			case 18: printf("Eighteen"); break;
			case 19: printf("Nineteen"); break;}	
	}
	else if (num < 100){
		switch (tens){
			case 1: printf("ten"); break;
			case 2: printf("twenty"); break;
			case 3: printf("thirty"); break;
			case 4: printf("forty"); break;
			case 5:	printf("fifty"); break;
			case 6: printf("sixty"); break;
			case 7: printf("seventy"); break;
			case 8: printf("eighty"); break;
			case 9: printf("ninety"); break;}
		printf("-"); 
		switch (ones){
			case 1: printf("one"); break;
			case 2: printf("two"); break;
			case 3: printf("three"); break;
			case 4: printf("four"); break;
			case 5: printf("five"); break;
			case 6: printf("six"); break;
			case 7: printf("seven"); break;
			case 8: printf("eight"); break;
			case 9: printf("nine"); break;}
	}
	else {printf("Enter two digits number!");}
	
	printf("\n");


}
