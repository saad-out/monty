#include "monty.h"
/**
 * pint - print an item at the top of the stack
 * @stack: pointer to the reference to the TOS
 * @line_number: to print in an error message
 */
void pint(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	if (stack && *stack)
		printf("%d\n", (*stack)->n);
	else
	{
		fprintf(stderr, "L%u: can't pint,stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
}
