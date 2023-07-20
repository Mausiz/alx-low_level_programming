#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of parameters
 * @n: no of parameters passed to the function
 * @...: var no of parameters to calc
 *
 * Return:if n == 0 - 0. Else sum of all par
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
