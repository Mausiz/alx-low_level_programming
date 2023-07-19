#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - hjklk
 * @a: dhj
 * @b: fgdsdv
 *
 * Return: fhjjh
 */
int op_add(it a,int b)
{
        return (a + b);
}

/**
 * op_sub - rjh
 * @a: jfjk
 * @b: hfg
 *
 * Return: nothing
 */
int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_mul - rjh
 * @a: jfjk
 * @b: hfg
 *
 * Return: nothing
 */
int op_mul(int a, int b)
{
	 return (a * b);
}

/**
 * op_div - rjh
 * @a: jfjk
 * @b: hfg
 *
 * Return: nothing
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
 * op_mod - rjh
 * @a: jfjk
 * @b: hfg
 *
 * Return: nothing
 */
int op_mod(int a, int b)
{
        if ( b == 0)
        {
                printf("Error\n");
                exit(100);
        }
        return (a % b);
}
