#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to the stdout
 * @c: The character to print
 * Return: 1 success
 * on error, -1 is returned,and erro is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
