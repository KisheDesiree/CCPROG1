#include <stdio.h>

int main()

{
   char cName, cProduct;
  float fPrice, fTotal;
  int iQuantity;

  printf("First letter of your name:");
  scanf("%c", &cName);
  printf("Welcome %c!\n", cName);

  printf("What would you like to buy?\n");
  scanf("%c", &cProduct);

  printf("Price:\n");
  scanf("%f", &fPrice);

  printf("Quantity of products:");
  scanf("%d", &iQuantity);

return 0;
}


