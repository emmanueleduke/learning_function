#include <stdio.h>
#include <math.h>

// Function prototype
double sqrt_newton(double n, double guess);

int main() 
{
  double n, guess, result;

  printf("Enter number: ");
  scanf("%lf", &n);

  printf("Enter guess: ");
  scanf("%lf", &guess);

  result = sqrt_newton(n, guess);

  printf("Square root of %lf is approximately %lf\n", n, result);

  return 0;
}

// Recursive function to calculate square root using Newton's method

double sqrt_newton(double n, double guess) 
{
  if (fabs(guess * guess - n) < 0.0001) 
  {
    // If the guess is accurate enough, return it
    return guess;
  }
  else {
    // Recursive step: improve the guess
    double new_guess = (guess + n / guess) / 2;
    return sqrt_newton(n, new_guess);
  }
}

