#include "monty.h"

/**
 * _getline - reads an entire line from file
 * @b: buffer to put the line in
 * @n: size of buffer
 * @fd: file descriptor
 *
 * Return: number of read characters | -1 (Failure {including EOF)
 */
ssize_t _getline(char **b, size_t *n, int fd)
{
	static char buffer[3072];
	static unsigned int i;
	size_t size, tmp;

	/* read from file */
	if (i == 0 || i >= 3072 || buffer[i] == '\0')
	{
		if (read(fd, buffer, 3072) == 0)
			return (-1);
	}

	/* free if nececcary */
	if (b && (*b))
		free(*b), *b = NULL;

	/* allocate size of memory */
	size = 0, tmp = i;
	while (buffer[tmp] && buffer[tmp] != '\n')
		size++, tmp++;
	*b = malloc(sizeof(char) * (size + 2));
	if (!(*b))
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	/* fill b */
	*n = 0;
	for (; buffer[i] && buffer[i] != '\n'; i++)
		(*b)[(*n)++] = buffer[i];
	(*b)[(*n)] = '\0';

	++i;
	return (1);
}
