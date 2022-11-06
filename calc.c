#include "main.h"

/**
 * main - The body of the calculator
 *
 * Return: 0 if compiled successfully
 */
int main(int argc, char *argv[])
{

	/* Declaring varables that can be used in the calculator, and inserted into functions. */
	float a, b, c, d, e, f, h;
	int j, k, l;
	char op;

	printf("A Calculator written in C\n");
	printf("Enter a letter to perform an operation\n"
			"Operations:\n"
			"0 - (x) - Exit\n"
			"1 - (a) - Addition\n"
			"2 - (s) - Subtraction\n"
			"3 - (m) - Multiplication\n"
			"4 - (d) - Division\n"
			"5 - (p) - Power\n"
			"6 - (f) - Factorial\n"
			"7 - (r) - Root\n"
			"8 - (q) - Quadratic\n"
			"9 - (l) - Simultaneous\n"
			"10 - (c) - Number base conversion\n");

	while (op != 'x')
	{
		printf("\nEnter an operation\n");
		scanf("%c", &op);

		switch (op)
		{
			case 'a':
			printf("Enter two numbers to be added\n");
			scanf("%f %f", &a, &b);
			h = add(a, b);
			break;
			case 's':
			printf("Enter two numbers to be subtracted\n");
			scanf("%f %f", &a, &b);
			h = sub(a, b);
			break;
			case 'm':
			printf("Enter two numbers to be multiplied\n");
			scanf("%f %f", &a, &b);
			h = mul(a, b);
			break;
			case 'd':
			printf("Enter two numbers to be divided\n");
			scanf("%f %f", &a, &b);
			h = divi(a, b);
			break;
			case 'p':
			printf("Enter two numbers to find a to the power of b\n");
			scanf("%f %f", &a, &b);
			h = powr(a, b);
			break;
			case 'f':
			printf("Enter a number to find its factorial\n");
			scanf("%f", &a);
			h = fact(a);
			break;
			case 'r':
			printf("Enter a number to find its square root\n");
			scanf("%f", &a);
			h = root(a);
			break;
			case 'q':
			printf("Enter coefficients of x2, x1 and x0\n");
			scanf("%f %f %f", &a, &b, &c);
			quad(a, b, c);
			break;
			case 'l':
			printf("Enter coefficients of the simultaneous equation\n");
			scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
			simu(a, b, c, d, e, f);
			break;
			case 'c':
			printf("Enter the number, its current base and the destination base\n");
			scanf("%d %d %d", &j, &k, &l);
			convert(j, k, l);
			break;
			case 'h':
			printf("%.2f was the last result\n", h);
			break;
			case 'x':
			return (0);
		}
	}

	return (0);
}
