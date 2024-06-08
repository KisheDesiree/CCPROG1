#include <stdio.h>

int main () {
	
	float fAmt, fTAmt, fAAmt, fBgt;
	char cChoice;
	
	//ask the user to input initial amount and budget
	printf("Please input initial amount: ");
	scanf("%f", &fAmt);
	
	printf("Please input initial budget: ");
	scanf("%f", &fBgt);
	
	//compare amount and budget
	if (fAmt < fBgt) {
		
		//ask the user if want to add amount
		printf("Do you want to add amount? (y/n): ");
		scanf(" %c", &cChoice);
		
		if (cChoice == 'y' || cChoice == 'Y') {
			
			printf("Enter amount to add: ");
			scanf("%f", &fAAmt);
			fTAmt = fAmt + fAAmt;
			
        } else if (cChoice == 'n' || cChoice == 'N') {
            printf("Thank you for using.\n");
            return 0;
            
        } else {
            printf("Invalid choice.\n");
            return 0;
        }
	} 
	
	if (fTAmt || fAmt >= fBgt) {
		
		printf("OVERBUDGET!");
	}
	
	return 0;
}
