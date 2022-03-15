#include <_putchar.h>
/**
 * main - prints the string "_putchar"
 * _putchar -  the character to print
 * Return: 0
 */
int main(void)
{
	char, c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

	return (0);
}
