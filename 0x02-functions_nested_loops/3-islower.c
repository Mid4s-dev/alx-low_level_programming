#include "main.h"

/**
 * _islower - check the code for ALX School students.
 * @c: The charectar to be cheked
 * Return: Always 0 or 1 for lower case
 */
int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
