#include <stdio.h>
int Result;
int Sum_Of_Square(int a, int b)
{
	int sum = a + b;

	return sum*sum;
}
int main()
{
	int a = 15;
	int b = 15;
	Result = Sum_Of_Square(a, b);
	printf("The sum of square of 15 + 15 = %d", Result);
	return 0;
}
