#include "main.h"

/**
 * simu - prints the result of two simultaneous equations
 * @a: - ax
 * @b: - by
 * @c: - c
 * @d: - dx
 * @e: - ey
 * @f: - f
 *
 * This code collects all the values of silmultaneous
 * linear equations of the form:
 * ax+by=c and dx+ey=f and computes the value of x and y
 *
 * Return: 0 At completion
 */
float simu(float a, float b, float c, float d, float e, float f)
{
	float l1, r1, l2, r2, m1, x, y;	/* These are used to calculate the fractions needed to compute x */

	printf("(%.1f)x + (%.1f)y = %.1f\n(%.1f)x + (%.1f)y = %.1f\n", a, b, c, d, e, f);

	l2 = ((c * e) / b);
	r2 = ((a * e) / b);
	l1 = f - l2;
	r1 = d - r2;
	x = (l1 / r1);
	m1 = (c - (a * x));
	y = (m1 / b);

	printf("The value of x and y that solve the silmultaneous equation are: x = %.2f and y = %.2f\n", x, y);

	return (0);
}
