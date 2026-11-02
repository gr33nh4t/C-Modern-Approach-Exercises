#include <stdio.h>

int main(void){
	//Modify the broker's program of section 5.2, ask about number of share and price per share. Then, add statements that if shares greater than 2000 (33+2 cents * shares), if it smaller (33+3 Cent *shares)

	float original_commission, price, value, rival_commission;
	int shares;

	printf("Enter number of shares: \n");
	scanf("%d", &shares);
	printf("Enter price per share: \n");
	scanf("%f", &price);
	
	value = price * shares;
	
	if (value < 2500.00f){original_commission=30.00f+0.017f*value;}
	else if (value < 6250.00f){original_commission=56.00f+0.0066f*value;}
	else if (value < 20000.00f){original_commission=76.00f+0.0034f*value;}
	else if (value < 50000.00f){original_commission=100.00f+0.0022f*value;}
	else if (value < 500000.00f){original_commission=155.00f+0.0011f*value;}
	else {original_commission=255.00f+0.0009f*value;}
	if (original_commission<39.00f){original_commission=39.00f;}

	printf("Original broker commission: $%0.2f\n", original_commission);
	
	// The another way (the new code)
	if (shares<2000){rival_commission=33.00f+0.03f*shares;}
	else {rival_commission=33.00f+0.02f*shares;}

	printf("Rival broker commission: $%0.2f\n",rival_commission);

}
