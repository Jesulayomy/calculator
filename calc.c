#include "main.h"

/**
 * main - The body of the calculator
 *
 * Return: 0 if compiled successfully
 */
int main(void)
{

	printf("C Calculator\n");

	float product = mul(3, 4), division = div(22, 7);

	printf("Product is %f\n, Division is %.2f\n", product, division);

	return (0);
}
