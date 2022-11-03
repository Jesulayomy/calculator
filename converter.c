#include "main.h"
#include <math.h>
/**
 * convert - a bin to dec or dec to bin converter
 * @n: the number
 * @b: the current base
 * @d: the destination base
 *
 * Return: the number converted to its destination base
 */
int convert(int n, int b, int d)
{
	int in_dec = convert_to_dec(n, b);

	to_dest(in_dec, d);

	return (0);
}

int convert_to_dec(int n, int b)
{
	int p, m = n, r = 0;

	for (p = 0; m / 10; p++)
	{
		r = r + ((m % 10) * pow(b, p));
		m = m / 10;
	}
	return (r);
}

int to_dest(int in_dec, int d)
{
	if (d == 10)
	{
		printf("%d\n", in_dec);
		return (0);
	}
	while (in_dec / d)
	{
		putchar(in_dec % d);
		to_dest(in_dec / 10, d);
	}
	return (0);
}
