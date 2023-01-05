#include <stdio.h>

// Function prototype
int power(int x, int y);

int main() 
{
  int base, exponent;

  printf("Enter base: ");
  scanf("%d", &base);

  printf("Enter exponent: ");
  scanf("%d", &exponent);

  printf("%d^%d = %d\n", base, exponent, power(base, exponent));

  return 0;
}

// Recursive function to calculate x^y
int power(int x, int y) 
{
  if (y == 0) 
  {
    // Any number raised to the power of 0 is 1
    return 1;
  }
  else 
  {
    // Recursive step: x^y = x * x^(y-1)
    return x * power(x, y-1);
  }
}

