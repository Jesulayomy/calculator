#include "main.h"
#include <math.h>
/**
 * convert - converts a number from one abse to another
 * bases over 10 are not implemented yet. conversion to dest in progress
 * @n: the number
 * @b: the current base
 * @d: the destination base
 *
 * Return: the number converted to its destination base
 */
void convert(int n, int b, int d)
{
	int in_dec = convert_to_dec(n, b);

	to_dest(n, in_dec, b, d);
}

int convert_to_dec(int n, int b)
{
	int p, m = n, r = 0;

	for (p = 0; m / 10 || m > 0; p++)
	{
		r = r + ((m % 10) * pow(b, p));
		m = m / 10;
	}

	return (r);
}


void to_dest(int n, int in_dec, int b, int d)
{
	int r, p, e = in_dec;

	if (d == 10)
	{
		printf("%d in base %d is %d in base %d\n", n, b, e, d);
		return;
	}

	for (p = 0, r = 0; e / d || e > 0; p++)
	{
		r = r + ((e % d) * pow(10, p));
		e /= d;
	}

	printf("%d in base %d is %d in base %d\n", n, b, r, d);

	return;
}
