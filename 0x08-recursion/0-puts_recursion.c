#include "main.h"
/**
 * _puts_recursion - print a string
 * @s:string
 * Return:void
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') // base case: if the current character is the null terminator, we have reached the end of the string
    {
        printf("\n"); // print a new line
        return; // terminate the function
    }

    printf("%c", *s); // print the current character
    _puts_recursion(s + 1); // call the function with the next character in the string
}
