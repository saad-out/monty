#include "monty.h"

/**
 * read_monty - reads the monty bytescode instructions to execute
 * @fd: file desciptor for file containing Monty Bytescode
 *
 * Return: void
 */
void read_monty(int fd)
{
	FILE *fs;
	char *buffer;
	size_t i;
	unsigned int line_number;
	stack_t *top;

	fs = fdopen(fd, "r");
	if (!fs)
		dprintf(STDERR_FILENO, "fdopen failed\n"), exit(EXIT_FAILURE);

	top = NULL;
	buffer = NULL, i = 0;

	/* execute one line\instruction at a time */
	line_number = 1;
	while (getline(&buffer, &i, fs) != -1)
	{
		execute_monty(buffer, line_number, &top);
		line_number++;
	}

	free(buffer);
	fclose(fs);
}
