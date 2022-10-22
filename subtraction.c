#include "main.h"

/**
 * sub - this function performs multiplication of two numbers
 * @a: a whole number
 * @b: the second number, subtracted from a
 *
 * Return: the result of the subtraction upon successful operation
 */

float sub(float a, float b)
{
        float c;
        c = a - b;

        printf("The difference between %.2f and %.2f is: (a - b) = %.2f \n", a, b, c);

        return (c);
}
