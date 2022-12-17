#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Entry point
 * Description: Prints triangles with Asterisks
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int rows =5;

	for (int i = 1; i <= rows; i++)
	{
		for (int j = 0; j < i; j++)
		{
			_putchar("*");
		}
		_putchar("\n");
	}
}
