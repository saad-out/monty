#include "monty.h"

/**
 * empty - writes a buffer to stdout and frees it
 * @buffer: given buffer
 *
 * Return: always 0
 */
unsigned int empty(char *buffer)
{
	int i;

	write(STDOUT_FILENO, buffer, 100);
	for (i = 0; i < 100; i++)
		buffer[i] = '\0';
	return (0);
}

/**
 * pstr - prints string at TOS
 * @stack: pointer to top of the stack
 * @line_number: opcode' line number
 *
 * Return: void
 */
void pstr(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	unsigned int i;
	char buffer[100];
	stack_t *tmp;

	i = 0;
	if (stack)
		tmp = *stack;
	else
		tmp = NULL;
	while (tmp)
	{
		/* check if buffer is full */
		if (i >= 100)
			i = empty(buffer);

		/* fill buffer */
		if (tmp->n < 1 || tmp->n > 127)
			break;
		buffer[i++] = tmp->n;

		tmp = tmp->prev;
	}

	buffer[i++] = '\n';
	write(STDOUT_FILENO, buffer, i);
}
