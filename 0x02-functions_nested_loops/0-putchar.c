#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');

	return (0);
}
