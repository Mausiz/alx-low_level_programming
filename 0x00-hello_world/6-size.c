#include <stdio.h>
/**
 * main - A program that prints the size of various types of xters
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("character size: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("int size: %lu bytes\n", (unsigned long)sizeof(b));
printf("long int size: %lu bytes\n", (unsigned long)sizeof(c));
printf("long long int: %lu bytes\n", (unsigned long)sizeof(d));
printf("float size: %lu bytes \n", (unsigned long)sizeof(f));
return (0);
}
