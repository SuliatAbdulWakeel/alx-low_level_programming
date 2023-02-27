#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string
 * Return: Always 0
 */

intmain(void)

{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
