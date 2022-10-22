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
	char op1, op2;

	printf("A Calculator written in C\n");
	scanf("%c %c", &op1, &op2);
	
	if (op1 == 'x')
	{
		printf("Yes it was x\n");
	}
	else
	{
		printf("nape, wasnt x, it was %c\n", op1);
	}

	if (op2 == 'y')
	{
		printf("Generic xy combo\n");
	}
	else
	{
		printf("%c? really?\n", op2);
	}

	return (0);
}
