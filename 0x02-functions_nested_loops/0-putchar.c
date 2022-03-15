#include "main.h"
/**
 * main - prints the string "_putchar"
 * _putchar -  the character to print
 * Return: 0
 */
int main(void)
{
	char, str[] = "_putchar";
	int i;

	i = 0;

	while (str[i])

	{
		_putchar(str[i]);

		++i;
	}

	_putchar('\n');

	return (0);
}
