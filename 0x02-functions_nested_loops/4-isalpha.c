#include "main.h"
 /**
  * _isalpha - Checks for charectars
  * @c: The charectar to be checked
  * Return: 1 for alphabetic charectar 0 for any thing else
  */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
