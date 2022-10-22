#include "main.h"

/**
 * main - The body of the calculator
 *
 * Return: 0 if compiled successfully
 */
int main(void)
{
	/* Declaring varables that can be used in the calculator, and inserted into functions. */
	float a, b, c, d, e, f;
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
			"9 - (l) - Simultaneous\n");
	scanf("%c", &op);

	while (op != 'x')
	{
		if (op == 'a')
		{
			printf("Enter two numbers to be added\n");
			scanf("%f %f", &a, &b);
			add(a, b);
			printf("Enter a new operation or exit\n");
		}
		else if (op == 's')
		{
			printf("Enter two numbers to be subtracted\n");
			scanf("%f %f", &a, &b);
			sub(a, b);
			printf("Enter a new operation or exit\n");
		}
		else if (op == 'm')
		{
			printf("Enter two numbers to be multiplied\n");
			scanf("%f %f", &a, &b);
			mul(a, b);
			printf("Enter a new operation or exit\n");
		}
		else if (op == 'd')
		{
			printf("Enter two numbers to be divided\n");
			scanf("%f %f", &a, &b);
			div(a, b);
			printf("Enter a new operation or exit\n");
		}
		else if (op == 'p')
		{
			printf("Enter two numbers to find a to the power of b\n");
			scanf("%f %f", &a, &b);
			powr(a, b);
			printf("Enter a new operation or exit\n");
		}
		else if (op == 'f')
		{
			printf("Enter a number to find its factorial\n");
			scanf("%f", &a);
			fact(a);
			printf("Enter a new operation or exit\n");
		}
		else if (op == 'r')
		{
			printf("Enter a number to find its root\n");
			scanf("%f", &a);
			root(a);
			printf("Enter a new operation or exit\n");
		}


		scanf("%c", &op);
	}

	return (0);
}
