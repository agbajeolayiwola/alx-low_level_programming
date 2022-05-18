#include "variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;
	sum = 0;
	va_start(args, n);
	if (args == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}


