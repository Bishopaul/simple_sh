#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *str = "This is a separated word by spaces";
	char *stcpy = malloc(sizeof(char) * strlen(str));
	char delim[5] = " ";
	char *ptr;
	int i;

	strcpy(stcpy, str);
	ptr = strtok(stcpy, delim);
	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, delim);
	}

	for (i = 0; i < 35; i++)
	{
		if (stcpy[i] == '\0')
			printf("\\0");
		else
			printf("%c", stcpy[i]);
	}

	return (0);
}
