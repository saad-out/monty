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
	stack_t *popped = pop2(stack, line_number);
	free(popped);
}
/**
 * pop2 - pop an element from the stack and return it
 * @stack: pointer to top of the stack
 * @line_number: the opcode's line number in the bytecode file
 *
 * The function will not free the stack item popped. The caller
 * should free it in on it's own
 *
 * Return: the removed
 */
stack_t *pop2(stack_t **stack, unsigned int line_number)
{
	stack_t *popped, *new_top;

	if (stack && !(*stack))
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_top = (*stack)->prev;
	if (new_top)
		new_top->next = NULL;

	popped = *stack;
	*stack = new_top;
	return (popped);
}
