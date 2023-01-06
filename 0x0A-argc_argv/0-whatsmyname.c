#include <stdio.h>
/**
 * main - write a program that prints its name. followed by new line.
 * if you rename the program. it will prints new name. without having to
 * compile it again
 * you should not remove the path before the name of the program
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
