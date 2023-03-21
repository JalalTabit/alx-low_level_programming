#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number to print the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit = _abs(n % 10);
_putchar(last_digit + '0');
return (last_digit);
}
