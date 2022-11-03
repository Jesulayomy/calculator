#include "main.h"

int main()
{
	int d, n, b;

	printf("Enter number, base and destination base seprated by spaces\n");
	scanf("%d %d %d", &n, &b, &d);

	convert(n, b, d);

	return (0);
}
