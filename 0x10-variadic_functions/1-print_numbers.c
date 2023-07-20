#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - hjhkjkjkjk
 * @separator: str printed btwn numbers
 * @n: numbers of ints passed to the function
 * @...: var numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separaor != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
