#include <stdio.h>

int main(void){
	// Write a program that breaks down an ISBN entered by the user.
	int gs1_pre, group_id, pub_code, item_nu, check_digit; 

	printf("Enter ISBN: \n");
	scanf("%d -%d -%d -%d -%d", &gs1_pre, &group_id, &pub_code, &item_nu, &check_digit);

	printf("GS1 prefix: %d\n", gs1_pre);
	printf("Group identifier: %d\n", group_id);
	printf("Publisher code: %d\n", pub_code);
	printf("Item number:%d\n", item_nu);
	printf("check digit: %d\n", check_digit);

	return 0;
}
