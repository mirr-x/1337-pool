/*
	argv: 0x1000
	argv[0]: 0x3030 -> ./my_program
	**argv: .
	argv[0]: 0x3030 -> ./my_program
	argv[1]: 0x3020 -> arg1
	argv[2]: 0x3010 -> arg2
	argv[3]: 0x3000 -> arg3

		argv (0x1000)
	|
	v
	+---------+---------+---------+---------+------+
	| 0x2000  | 0x2008  | 0x2010  | 0x2018  | NULL |
	+---------+---------+---------+---------+------+
		|         |         |         |
		|         |         |         +----> "arg3\0" (0x3000)
		|         |         +--------------> "arg2\0" (0x3010)
		|         +-----------------------> "arg1\0" (0x3020)
		+--------------------------------> "./my_program\0" (0x3030)






*/

#include <stdio.h>

int main()
{
	char *args[] = {"./my_program", "arg1", "arg2", "arg3", NULL};

	// Print the address of the args array and the value it points to (address of args[0])
	printf("args: %p\n", (void *)args);
	printf("args: %p\n", &args);

	// Print the address and value of args[0] (address of the first string)
	printf("args[0]: %p -> %s\n", (void *)args[0], args[0]);

	// Print the first character of the first string using **args
	printf("**args: %c\n", **args);

	// Calculate the number of elements in the array (excluding the NULL terminator)
	int argc = sizeof(args) / sizeof(args[0]) - 1;

	// Print all elements with their addresses
	for (int i = 0; i < argc; i++)
	{
		printf("args[%d]: %p -> %s\n", i, (void *)args[i], args[i]);
	}

	return 0;
}
