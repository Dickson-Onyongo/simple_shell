#include "shell.h"
/**
 * main - displays a prompt on the stdout and waits fro the user to type a command
 * @stream: the string pointer
 *
 * Return: returns 0 upon success
 */


int main (void)
{
	char *stream = NULL;
	size_t len = 0;

	while (getline(&stream, &len, stdin) != -1)
	{
		print_str("$ ");
		print_str("%s\n", stream);
		print_str("$ "\n");
	}

	return (0);

}


