#include <stdio.h>
#include <math.h>

/**
 * main - main functions
 *
 * This code uses a while loop and approximation to obtain the sqrt of a num
 *
 * Return: 0 for ok
 */
int main(void)
{
	double s;
	double n;
	int count = 0;

	printf("SQUARE ROOT CALCULATOR.\nEnter a number... ");
	scanf("%lf", &n);

	s = n;
	while ((s - (n / s)) > 0.0001)
	{
		s = ((s + (n / s)) / 2);
		count++;
		printf("This is the %d recursion.\nS is currently: %.2f.\n", count, s);
	}


	printf("The square root is %.1f\n", s);
	return (0);
}
