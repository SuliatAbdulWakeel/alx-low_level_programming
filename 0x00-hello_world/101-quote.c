#include <unistd.h>

/**
 * main - prints "and that place of art is useful" - Dora Korpar, 2015-10-19",
 * followed by a newline, to standard error.
 * Return: Always 1.
 */

int main(void)
{
	write(2, "and that place of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
