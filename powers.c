#include "main.h"

/**
 * pow - The function that finds the value of a number to the power of another.
 *
 * Return: the value of n^m when successful
 */
float _pow(float a, int b)
{
        float f, m = b;

        for (f = 1; b > 0; b--)
                f *= a;

        return (f);
}
