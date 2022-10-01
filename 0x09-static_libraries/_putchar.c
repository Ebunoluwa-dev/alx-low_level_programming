#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
<<<<<<< HEAD
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
=======
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
>>>>>>> 690f3709a4a1c46ba984b8bee927073ea6253d5d
*/

int _putchar(char c)
{
<<<<<<< HEAD
		return (write(1, &c, 1));
=======
	return (write(1, &c, 1));
>>>>>>> 690f3709a4a1c46ba984b8bee927073ea6253d5d
}
