#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;
	int num;

	for (num = 0; num < 10; ++num)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}