#include "monty.h"

/**
 * add_to_TOS - adds new element to top of the stack
 * @stack: pointer to top of the stack
 * @n: element's data
 *
 * Return: pointer to new element
 */
stack_t *add_to_TOS(stack_t **stack, int n)
{
	stack_t *new_e;

	new_e = malloc(sizeof(*new_e));
	if (!new_e)
		dprintf(STDERR_FILENO, "Error: malloc failed"), exit(EXIT_FAILURE);
	new_e->n = n, new_e->prev = NULL, new_e->next = NULL;

	if (!stack || !(*stack))
		*stack = new_e;
	else
	{
		(*stack)->next = new_e;
		new_e->prev = (*stack);
		*stack = new_e;
	}

	return (new_e);
}
