#include <stdio.h>

int main () {
	char cName, cProduct;
	float fPrice, fTotal;
	int iQuantity;
	
	printf("First letter of your name:");
	scanf(" %c", &cName);
	
	printf("Welcome %c! Your order please:", cName);
	scanf(" %c", &cProduct);
	
	printf("Price:");
	scanf(" %f", &fPrice);
	
	printf("Quantity:");
	scanf(" %d", &iQuantity);
	
	fTotal = fPrice * iQuantity;
	
	printf("Total amount:P%.2f\n", fTotal);
	
	return 0;
	

}
