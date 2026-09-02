#include <stdio.h>

int main(void){
	// Write a program that formats product information entered by the user. The item number and date should be left justified: the unit price should be right justified. Allow dollar amounts up to 9999.99. 

	int item_num, year, month, day;
	float unit_price;

	printf("Enter item number: \n");
	scanf("%d", &item_num);

	printf("Enter unit price: \n");
	scanf("%f", &unit_price);

	printf("Enter purchase date (mm/dd/yyyy): \n");
	scanf("%d /%d /%d", &month, &day, &year);
	

	printf("Item	Unit	Purchase\n");
	printf("	Price	Date\n");
	printf("%d	%.2f	%d/%d/%d\n", item_num, unit_price, month, day, year);

	return 0;

}
