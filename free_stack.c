#include "monty.h"

/**
 * free_stack - frees stack memory
 * @stack: stack's top element
 *
 * Return: void
 */
void free_stack(stack_t *stack)
{
	stack_t *next_e;

	if (!stack)
		return;

	next_e = stack->prev;
	while (stack)
	{
		free(stack), stack = NULL;
		stack = next_e;
		if (next_e)
			next_e = next_e->prev;
	}
}
