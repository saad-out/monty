#include "monty.h"
/**
 * pint - print an item at the top of the stack
 * @stack: pointer to the reference to the TOS
 * @line_number: unused here
 */
void pint(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	if (stack && *stack)
		printf("%d\n", (*stack)->n);
}
