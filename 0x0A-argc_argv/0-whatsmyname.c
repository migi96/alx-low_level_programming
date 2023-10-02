#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
