#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes characters c to stdout
 * @c : Ther character to print
 *
 * Return: on success 1.
 * On error, -1 is returned and error is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
