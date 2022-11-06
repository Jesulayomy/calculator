#include "main.h"

/**
 * main - The body of the calculator
 *
 * Return: 0 if compiled successfully
 */
int main(int argc, char *argv[])
{

	/* Declaring varables that can be used in the calculator, and inserted into functions. */
	float res, prev, prev_mul, num;
	int i, c;

	prev = 0;
	prev_mul = 1;

	if (argc == 1)
	{
		printf("No calculation passed as arguments\n");
		printf("Usage: ./calculator <<function>> <<arguments>>\n");

		return (1);
	}
	
	if (argc == 2)
	{
		printf("No numbers passed to calculate\n");

		return (1);
	}

	c = strcmp(argv[1], "add");

	if (c == 0)
	{
		for (i = 2; i < argc; i++)
		{
			num = atof(argv[i]);

			res = add(prev, num);

			prev = res;
		}

		printf("The result of the addition is: %.2f\n", res);

		return (0);
	}

	c = strcmp(argv[1], "subtract");

	if (c == 0)
	{
		res = sub(atof(argv[2]), atof(argv[3]));
		printf("The result of the subtraction is: %.2f\n", res);

		return (0);
	}

	c = strcmp(argv[1], "multiply");

	if (c == 0)
	{
		for ( i = 2; i < argc; i++)
		{
			num = atof(argv[i]);

			res = mul(prev_mul, num);

			if (res > FLT_MAX)
			{
				printf("Exceeded maximum result value\n");
				return (1);
			}

			prev_mul = res;
		}

		printf("The result of the multiplication is: %.2f\n", res);
	}

	c = strcmp(argv[1], "divide");

	if (c == 0)
	{
		res = divi(atof(argv[2]), atof(argv[3]));
		printf("The result of the division is: %.2f\n", res);

		return (0);
	}

	printf("Error: Invalid function to calulate!\n"
			"Available functions: Name and how to call it in brackets\n\n"
			"Addition (add)\n"
			"Subtraction (subtract)\n"
			"Multiplication (multiply)\n"
			"Division (divide)\n");

}
