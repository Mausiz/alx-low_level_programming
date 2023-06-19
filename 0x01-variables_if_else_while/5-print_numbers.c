#include <stdio.h>
/**
 * main - prints all single digits of base 10
 * Return: 0 (Success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((ones == tens) || (tems > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
				{
					putchar(',');
					puchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
