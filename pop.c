#include "monty.h"

/**
 * pop - removes top element of stack
 * @stack: pointer to top of the stack
 * @line_number: opcode' line number
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *new_top;

	if (stack && !(*stack))
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_top = (*stack)->prev;
	if (new_top)
		new_top->next = NULL;
	free(*stack);
	*stack = new_top;
}
