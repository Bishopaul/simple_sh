#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char *homeval = getenv("HOME");

	printf("%s\n", homeval);
}
