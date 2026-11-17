#include <stdio.h>
#include "function_pointers.h"

void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("Hello, my uppercase name is ");
	for (i = 0; name[i]; i++)
	{
		if (name[i] >= 'a' && name[i] <= 'z')
			putchar(name[i] - 32);
		else
			putchar(name[i]);
	}
	printf("\n");
}

int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
	return (0);
}
