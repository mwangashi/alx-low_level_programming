#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and the piece of art is usefull- Dora Korpar, 2015-10-19",followed by a new line, to the standard error.
 *   Return: Always 0 (Success)
 */

int main(void)
{
	write(2,"and the piece of art is usefull\"- Dora Korpar, 2015-10-19\n"59);
	return (1);
}
