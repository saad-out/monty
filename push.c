#include "monty.h"

/**
 * push - pushes data to the top of the stack
 * @stack: pointer to top of the stack
 * @line_number: opcode's line number
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	int n;
	char *s;
	stack_t *new_n;

	/* get value to be pushed to TOS */
	s = strtok(NULL, "\t\n ");
	if (s)
		n = atoi(s);
	if (!s || !n)
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_n = malloc(sizeof(*new_n));
	if (!new_n)
		dprintf(STDERR_FILENO, "Error: malloc failed"), exit(EXIT_FAILURE);

	add_to_TOS(stack, n);
}
