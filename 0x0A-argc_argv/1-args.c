#include <stdio.h>
/**
 * main - write a code that prints the number of arguments passed into it
 *
 * @args: this is the argument count
 * @argv: this is the argument vector
 *
 * Return: this returns to 0
 *
 */
int main(int args, char *argv[])
{
	printf("%s\n", args - 1);
	(void)argv;
	return (0);
}
