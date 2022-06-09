#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: integer to be printed
 * Return: Always 0,
 */

int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}

}
