#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 *
 * @argc: number of arguments
 * @argv: string of arguments
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
