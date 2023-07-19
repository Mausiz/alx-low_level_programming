#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - gjk
 * @a: jjhfjd
 * @b: gfhe
 *
 * Return: efghgef
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gjk
 * @a: jjhfjd
 * @b: gfhe
 *
 * Return: efghgef
 */
int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_mul - gjk
 * @a: jjhfjd
 * @b: gfhe
 *
 * Return: efghgef
 */
int op_mul(int a, int b)
{
	return (a *b);
}

/**
 * op_div - gjk
 * @a: jjhfjd
 * @b: gfhe
 *
 * Return: efghgef
 */
int op_div(int a, int b)
{
        if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gjk
 * @a: jjhfjd
 * @b: gfhe
 *
 * Return: efghgef
 */
int op_mod(int a, int b)
{
        if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
        return (a % b);
}
