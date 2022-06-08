#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet in lowercase.
 *
 * Return: alphabet,
 */

void print_alphabet(void)
{
char alphabet;
for (alphabet = "a"; alphabet <= "z"; alphabet++)
{
_putchar(alphabet);
}
_putchar("\n");

}
