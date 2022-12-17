#include "main.h"
/**
 * print_triangle - Entry point
 * Description: Print triangle with asterisks
 * @size: size of the printed triangle
 * Return: void
 */
void print_triangle(int size)
{
	int row, j, i;

	if (size <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (i = size - row; i >= 1; i--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= row; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
