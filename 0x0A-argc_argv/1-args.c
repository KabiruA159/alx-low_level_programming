#include <stdio.h>
/**
 * main - write a program that prints the number of arguments passed into it
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: This return to 0
 */
int main(int argc, char *argv[])
{
	argc = 0;

	printf("%s\n", argv[0]);
        (void)argc;
	return (0);
}
