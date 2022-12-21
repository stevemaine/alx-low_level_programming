#include "main.h"
/**
 * string_toupper - Changes all lowercase letters
 * of a string to uppercase
 * @s: String to be chnaged
 * Return: A pointer to the changed string
 */
char *string_toupper(char *s) {
  // Iterate through the string and convert all lowercase letters to uppercase
  char *p = s;

  while (*p) {
    if (*p >= 'a' && *p <= 'z') {
      *p -= 'a' - 'A';
    }
    p++;
  }
  // Return a pointer to the modified string
  return (s);
}




