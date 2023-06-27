#include <unistd.h>

/**
 * _putchar - writes character c stands out
 * @c: Character to print
 * Return: 0 (Success)
 * On error,return -1, and errno is set sppropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
