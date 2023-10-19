#include <stdio.h>
#include <stdlib.h>

/**
 * main - reads an entire line from stream
 * buff: null-terminated and includes the newline character
 *
 * Return: 0
 */

int main(void)
{
	size_t n = 0;
	char *buff = NULL;

	printf("$ ");
	getline(&buff, &n, stdin);
	printf("%s", buff);

	free(buff);

	return (0);
}
