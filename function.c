#include <stdio.h>

void addsum(int a, int b)
{
	printf("The sum of %d and %d = %d\n", a, b, a + b);

}
int main(void)
{
	addsum(20, 50);
	addsum(100, 40);
	addsum(30, 60);
	addsum(15, 35);
	addsum(45, 45);
		
}
