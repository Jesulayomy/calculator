#include <stdio.h>

/**
 * silm - equations
 * @a: - hello
 * @b: - hi
 * @c: - why
 * @d: - variables
 * @e: - h
 * @f: - thanks
 *
 * This code collects all the values of two silmultaneous equations of the form:
 * ax+by=c and dx+ey=f and computes the value of x and y
 *
 * Return: 0 At completion
 */
float silm(float a, float b, float c, float d, float e, float f)
{
	float l1, r1, l2, r2, m1, x, y;	/* These are used to calculate the fractions needed to compute x */

	printf("(%.1f)x + (%.1f)y = %.1f\n(%.1fd)x + (%.1f)e = %.1f\n", a, b, c, d, e, f);

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

/**
 * main - equations
 *
 * This code collects all the values of two silmultaneous equations of the form:
 * ax+by=c and dx+ey=f and computes the value of x and y
 *
 * Return: 0 after success
 */
int main(void)
{
	float u, v, w, x, y, z;
	printf("Enter the coefficients of the silmultaneous equation\nx1: ");
	scanf("%f", &u);
	printf("y1: ");
	scanf("%f", &v);
	printf("z1: ");
	scanf("%f", &w);
	printf("x2: ");
	scanf("%f", &x);
	printf("y2: ");
	scanf("%f", &y);
	printf("z2: ");
	scanf("%f", &z);

	silm(u, v, w, x, y, z);

	printf("You're welcome!\n");

	return (0);
}
