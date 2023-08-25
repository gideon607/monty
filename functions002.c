#include "monty.h"
/**
 * _sch - Search for a char in strings
 * @s: strings to be review
 * @c: char to locate.
 * Return: 1 for success 0 for not
 */
int _sch(char *s, char c)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		if (s[cont] == c)
		{
			break;
		}
		cont++;
	}
	if (s[cont] == c)
		return (1);
	else
		return (0);
}
