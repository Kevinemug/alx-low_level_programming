#include<stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase.
 *
 * Return: alphabet,
 */

void print_alphabet(void)
{
char alphabet;
for (alphabet = "a"; alphabet <= "z"; alphabet++)

putchar(alphabet);
putchar("\n");

return (alphabet);

}

/**
 * main - calls print_alphabet function.
 *
 * Return: always 0,
 */

int main(void)
{
print_alphabet();

return (0);
}
