#include "main.h"

/**
 * pow - The function that finds the value of a number to the power of another.
 *
 * Return: the value of n^m when successful
 */
float powr(float a, int b)
{
        float f, m = b;

        for (f = 1; b > 0; b--)
        {
                f *= a;
        }
        printf("%.0f is the value of (%.0f ^ %.0f)\n", f, a, m);

        return (f);
}
