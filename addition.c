#include "main.h"

/**
 * add - this function performs multiplication of two numbers
 * @a: number to be added to
 * @b: the second number, a adds with this
 *
 * Return: the result of the addition upon successful operation
 */

float add(float a, float b)
{
        float c;
        c = a + b;

        printf("The sum of %.2f and %.2f is: (a + b) = %.2f \n", a, b, c);

        return (c);
}
