#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * _strtok - String tokenization
 *
 * str: string to be passsed
 * delim: delimeter
 */

void _strtok(const char *str, char delim)
{
	int length = strlen(str);
	char word[length + 1];
	int i, j;

	for (i = 0; i <= length; i++)
	{
		j = 0;
		if (str[i] == delim || str[i] == '\0')
			word[j] = '\0';
		if (j > 0)
		{
			printf("%s\n", word);
			j = 0;
		}
		else
		{
			word[j++] = str[i];
			j++;
		}
	}
}
