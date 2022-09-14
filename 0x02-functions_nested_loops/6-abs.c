#include "main.h"
#include <stdio>
/**
 * _abs - function that computes the absolute value of an integer
 * @c: is the int that will use foor the arguement of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
		return (c * -1);
}
