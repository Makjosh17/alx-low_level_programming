#include "main.h"
/**
 * print_sign - function that prints the sign of a number..
 * @n: the input number to check
 * Return: 1 for positive num, -1 for negative num or zero for anthing else
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
