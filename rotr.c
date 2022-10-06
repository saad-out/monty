#include "monty.h"

/**
 * rotr - rotates stack to the bottom
 * @stack: pointer to top of the stack
 * @line_number: opcode' line number
 *
 * Return: void
 */
void rotr(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *last;

	if (!stack || !(*stack) || !(*stack)->prev)
		return;

	/* get last element */
	last = *stack;
	while (last && last->prev)
		last = last->prev;

	/* rotate */
	last->next->prev = NULL;
	last->prev = *stack;
	last->next = NULL;
	(*stack)->next = last;

	/* change TOS */
	*stack = last;
}
