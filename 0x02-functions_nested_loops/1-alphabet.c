#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
