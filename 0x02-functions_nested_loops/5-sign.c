#include "holberton.h"

/**
 * print_sign - prints sign of #
 * @n: checks for sign of #
 * Return: 1 if greater than 0, 0 if equal to 0, -1if less than 0
 */

int main print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n < 0)
{
_putchar ('-');
return ('-1');
}
else
{
_putchar ('0');
return (0);
}
}
