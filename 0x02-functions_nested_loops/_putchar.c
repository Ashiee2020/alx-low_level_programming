#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: the char to print
 * return: 1 on success
 * on error, -1 is returned,and error is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
