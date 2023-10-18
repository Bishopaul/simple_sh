#include <stdio.h>
#include <stdlib.h>

/**
 * getline - reads an entire line from stream
 * buff: null-terminated and includes the newline character
 */

int main (void)
{
	size_t n = 0;
	char *buff = NULL;

	printf("$ ");
	getline(&buff, &n, stdin);
	printf("%s", buff);

	free(buff);

	return(0);
}
