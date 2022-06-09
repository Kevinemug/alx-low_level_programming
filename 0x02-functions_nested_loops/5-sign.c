#include "main.h"

/**
 * print_sign -  prints the sign of a number.
 * @j: The int to_be printed
 *  Return: Always 0.
 */

int print_sign(int j)
{
if (j > 0)
{
_putchar ('+');
return (1);
}
else if (j == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}

}
