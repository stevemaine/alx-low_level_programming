#include "main.h"
/**
 * main - Prints the alphabet in lowercase followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	return (0);
}
