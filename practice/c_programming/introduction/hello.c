#include <stdio.h>

/**
 * prints hello followed by name
 *
 */

int main(void)
{
	char name[200];
	
	printf("what is your name: \n");
	scanf("%s", name);

	printf("Hello, %s!\n", name);

	return 0;
}
