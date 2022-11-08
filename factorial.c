#include "main.h"

/**
 * fact - The function that finds the factorial of a number.
 *
 * Return: the value of n! when successful
 */
float fact(float a)
{
	float f, m = a;

	for (f = 1; a > 1; a--)
		f *= a;

	return (f);
}
