#include "main.h"
/**
 * print_mumbers - prints numbers 0-9
 *
 *
 * Return: void
 */
void print_numbers(void)
{
int i;

i = 0;

for (i = 0; i < 10; i++)
{
	_putchar(i + '0');
}
_putchar('\n');
}
