#include "monty.h"
/**
 * divide - perform a division from elements on the stack
 * @stack: pointer to the top of the stack
 * @line_number: the line number of opcode in bytecode file
 *
 * The format will be 1/TOS * Previous TOS
 */
void divide(stack_t **stack, unsigned int line_number)
{
	stack_t *top;

	if (stack && *stack && (*stack)->prev)
	{
		top = pop2(stack, line_number);
		if (top->n == 0)
		{
			fprintf(stderr, "L%u: division by 0\n", line_number);
			exit(EXIT_FAILURE);
		}
		(*stack)->n = (*stack)->n / top->n;
		free(top);
	}
	else
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}