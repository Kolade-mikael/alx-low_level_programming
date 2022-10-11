#include <stdio.h>

/**
 * main - prints all argument it recieves
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: prints all arguments it receives
 * Return: Always(0) Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[1]);
	}
	return (0);
}
