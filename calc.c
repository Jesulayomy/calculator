#include "main.h"

int check(int arg, char *s);

/**
 * main - The body of the calculator
 * @argc: command line argument operations and values to perform them on
 * @argv: stings of operations and values to perform them on
 *
 * Return: 0 if compiled successfully
 */
int main(int argc, char *argv[])
{
	/**
	 * Declaring varables that can be used in the calculator,
	 * and inserted into functions.
	 */

	float res, prev, prev_mul, num;
	int i, c, ch;

	prev = 0;
	prev_mul = 1;

	/* checking for no arguments */
	if (argc == 1)
	{
		printf("No operation passed as arguments\n");
		printf("Usage: ./calculator <<operation>> <<argument(s)>>\n"
			"Usage: ./calculator menu\n");

		return (1);
	}

	/* Printing a menu for help */
	c = strcmp(argv[1], "menu");

	if (c == 0)
	{
		printf("To use the calculator, run:\n"
			"./calculator <<operation>> <<argument(s)>>\n");
		printf("Available functions (operation) (argument(s))\n"
			"Addition (add) (a) (b) (c) (...)\n"
			"Subtraction (subtract) (a) (b) (c) (...)\n"
			"Multiplication (multiply) (a) (b) (c) (...)\n"
			"Division (divide) (a) (b) (c) (...)\n"
			"Factorial (factorial) (a) (b) (...)\n"
			"Power (power) (a) (b)\n"
			"Converting bases (base) (num) (base) (dest_base)\n"
			"Quadratic (quadratic) (a) (b) (c)\n"
			"Root (root) (a) (b) (c) (...)\n"
			"Silmultaneous (simultaneous) a(x) b(y) c d(x) e(y) f\n"
			);

		return (0);
	}

	c = strcmp(argv[1], "add");

	if (c == 0)
	{
		ch = check(argc, argv[1]);

		if (ch == 1)
			return (1);

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
		ch = check(argc, argv[1]);

		if (ch == 1)
			return (1);

		num = atof(argv[2]);
		for (i = 2; i < argc; i++)
		{
			/* prev = next number, starts as 0 */
			res = sub(num, prev);
			num = res;
			if (argv[i + 1])
			{
				prev = atof(argv[i + 1]);
			}
		}
		printf("The result of the subtraction is: %.2f\n", res);

		return (0);
	}

	c = strcmp(argv[1], "multiply");

	if (c == 0)
	{
		ch = check(argc, argv[1]);

		if (ch == 1)
			return (1);

		for (i = 2; i < argc; i++)
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

		return (0);
	}

	c = strcmp(argv[1], "divide");

	if (c == 0)
	{
		ch = check(argc, argv[1]);

		if (ch == 1)
			return (1);

		num = atof(argv[2]);
		for (i = 2; i < argc; i++)
		{
			/* prev_mul = next number to divide, init as 1 */
			res = divi(num, prev_mul);
			num = res;
			if (argv[i + 1])
			{
				prev_mul = atof(argv[i + 1]);
			}
		}
		printf("The result of the division is: %.2f\n", res);

		return (0);
	}

	c = strcmp(argv[1], "factorial");

	if (c == 0)
	{
		ch = check(argc, argv[1]);

		if (ch == 1)
			return (1);

		for (i = 2; i < argc; i++)
		{
			res = fact(atof(argv[i]));
			printf("The factorial of %.2f is %.2f\n",
					atof(argv[i]), res);
		}

		return (0);
	}

	c = strcmp(argv[1], "power");

	if (c == 0)
	{
		ch = check(argc, argv[1]);
		if (ch == 1)
			return (1);

		if (argc > 4)
			printf("Power operation takes the 1st two operands\n");

		res = _pow(atof(argv[2]), atoi(argv[3]));
		printf("%.2f raised to the power of %d is %.2f\n",
				atof(argv[2]), atoi(argv[3]), res);

		return (0);
	}

	c = strcmp(argv[1], "base");

	if (c == 0)
	{
		ch = check(argc, argv[1]);

		if (ch == 1)
			return (1);
		if (argc < 5)
		{
			printf("Insufficient parameters\n"
		"Usage: ./calculator base num current_base dest_base\n");
			return (0);
		}

		if (argc > 5)
			printf("Base operation takes the 1st three operands\n");

		convert(atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));

		return (0);
	}

	c = strcmp(argv[1], "quadratic");

	if (c == 0)
	{
		ch = check(argc, argv[1]);

		if (ch == 1)
			return (1);
		if (argc < 5)
		{
			printf("Insufficient parameters\n"
			"Usage: ./calculator quadratic (a) (b) (c)\n");

			return (0);
		}

		if (argc > 5)
			printf("Quad operation takes the 1st three operands\n");

		quad(atof(argv[2]), atof(argv[3]), atof(argv[4]));

		return (0);
	}

	c = strcmp(argv[1], "root");

	if (c == 0)
	{
		ch = check(argc, argv[1]);

		if (ch == 1)
			return (1);

		for (i = 2; i < argc; i++)
		{
			res = root(atof(argv[i]));
			printf("The square root of %.2f is %.2f\n",
					atof(argv[i]), res);
		}

		return (0);
	}

	c = strcmp(argv[1], "simultaneous");

	if (c == 0)
	{
		ch = check(argc, argv[1]);

		if (ch == 1)
			return (1);
		if (argc < 8)
		{
			printf("Insufficient parameters\n"
			"Usage: ./calculator simultaneous ax by c dx ey f\n");

			return (0);
		}

		if (argc > 8)
			printf("Quad operation takes the 1st three operands\n");

		simu(atof(argv[2]), atof(argv[3]), atof(argv[4]), atof(argv[5]),
			atof(argv[6]), atof(argv[7]));

		return (0);
	}

	printf("Error: Invalid function to calulate!\n");
	printf("Usage: ./calculator menu\nUsage: will list all operations\n");

	return (1);
}

/**
 * check - checks if arg is equal to 2
 * @arg: arg to check
 * @s: function name
 *
 * Return: 1 if arg is 2 and 0 otherwise
 */
int check(int arg, char *s)
{
	if (arg == 2)
	{
		printf("Error: Insufficient values passed to %s function\n", s);
		return (1);
	}
	else
	{
		return (0);
	}
}
