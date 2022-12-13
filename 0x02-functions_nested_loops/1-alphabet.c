#include "main.h"
/**
 * main - Prints the alphabe in lowercase followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
