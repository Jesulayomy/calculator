#include "main.h"

/**
 * div - this function performs the division of two numbers
 * @a: the numerator
 * @b: the denumerator
 *
 * Return: result of the operation
 */

float div(float a, float b)
{
	float c;
	c = a / b;
	printf("The result of a divided by b is: (a / b) = %.2f \n", c);

	return (c);
 }