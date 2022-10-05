#include "monty.h"
/**
 * swap - swap a TOS item with the one preeding it
 * @stack: pointer to reference to item at TOS
 * @line_number: for the error message
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tos_node, *next_tos;

	if (*stack && (*stack)->prev)
	{
		tos_node = pop2(stack, line_number);
		next_tos = pop2(stack, line_number);

		(*stack)->next = tos_node, tos_node->prev = *stack;
		(*stack) = tos_node;
		(*stack)->next = next_tos, next_tos->prev = *stack;
		*stack = next_tos;
	}
	else
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
