#include "main.h"
 /**
  * _strcat - concatenates two strings
  * @dest: pointer to desination string
  * @src: pointer to power source
  *
  * Return: pointer to destination string
  */

char *_strcat(char *dest, char *src)
{
	int lenght, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
