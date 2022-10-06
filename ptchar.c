#include "monty.h"
/**
 * ptchar- print a char from the stack to the standard output
 * @stack: the top of the stack
 * @line_number: the position of the opcode in the bytecode
 */
void ptchar(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't ptchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n > 127 || (*stack)->n < 0)
	{
		fprintf(stderr, "L%u: can't ptchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
