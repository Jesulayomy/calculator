#include "main.h"

/**
 * main - The body of the calculator
 *
 * Return: 0 if compiled successfully
 */
int main(void)
{
	printf("C Calculator\n");
	float a = 3, b = 4;
	float product = mul(a, b);
	a = 22, b = 7;
	float division = div(a, b);
	float rt = root(121);
	float sum1 = add(a, b);
	float diff1 = sub(a, b);

	printf("Product is %f\nDivision is %.2f\n", product, division);

	return (0);
}
