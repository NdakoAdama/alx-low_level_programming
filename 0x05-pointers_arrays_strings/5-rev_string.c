#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a given string
 *
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
  int i;

  i = 0;
  while (s[i] != '\0')
    i++;
  return (i);
}

void rev_string(char *s)
{
  int i, rev;
  char a, z;

  rev = _strlen(s) - 1;
  i = 0;
  while (i < rev)
    {
      a = s[i];
      z = s[rev];
      s[i++] = z;
      s[rev--] = a;
    }
}

