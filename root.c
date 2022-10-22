#include "main.h"

/**
 * root - function to find the square root of a number
 * @a: the number whose root is to be determined
 * This code uses a while loop and approximation to obtain the sqrt of a num
 *
 * Return: The square root of the number provided.
 */
float root(float a)
{
	float s = a;

	while ((s - (a / s)) > 0.0001)
	{
		s = ((s + (a / s)) / 2);
	}

	printf("The square root of %.2f is %.2f\n", a, s);
	return (s);
}
