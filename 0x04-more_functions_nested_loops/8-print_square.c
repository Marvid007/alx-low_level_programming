#include "main.h"
/**
 * print_square - function that prints a square
 * @size: size of both width and length
 * Return: square made of '#'
 */
void print_square(int size)
{

int co, so;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (co = 1; co <= size; co++)
{
_putchar('#');

for (so = 2; so <= size; so++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
