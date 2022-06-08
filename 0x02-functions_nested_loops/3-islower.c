#include "main.h"

/**
 * _islower - checks for lowercase character.
 *@c:stores comparison value.
 * Return: Always 0,
 */
int _islower(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}
else
{
return (0);
}

}
