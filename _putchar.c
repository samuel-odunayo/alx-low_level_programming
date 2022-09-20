#include <unistd.h>

/**
 * _putchar - writes the character c to stout
 *
 * @c: the character to print
 *
 * Return: On success 1
 * On fail -1 and errno is set approriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

