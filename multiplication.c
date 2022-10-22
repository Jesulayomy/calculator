#include "main.h"

/**
 * mul - this function performs multiplication of two numbers
 * @a: number to be multiplied with
 * @b: the second number
 *
 * Return: 0: successful operation
 */

float mul(float a, float b)
{
	float c;
	c = a * b;
	printf("The product of a and b is: (a * b) = %.2f \n", c);

	return (c);
}
