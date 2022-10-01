#include "main.h"

/**
<<<<<<< HEAD
 * _isupper - checks if a character is uppercase or not
 * @c: character to be tested
 * Return: 1 whether it is, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
=======
*_isupper - a function that checks for uppercase character
*@c: single letter input
*Return: 1 if int c is lowercase, 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
>>>>>>> 690f3709a4a1c46ba984b8bee927073ea6253d5d
}
