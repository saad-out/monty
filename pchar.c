#include "monty.h"
/**
 * pchar - print a char from the stack to the standard output
 * @stack: the top of the stack
 * @line_number: the position of the opcode in the bytecode
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
<<<<<<< HEAD:ptchar.c
		fprintf(stderr, "L%u: can't ptchar, stack empty\n", line_number);
=======
		fprintf(stderr, "L%u: can't pchar, stack empty", line_number);
>>>>>>> 71f2aee1077ef5d447a787911c75d279792eec14:pchar.c
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n > 127 || (*stack)->n < 0)
	{
<<<<<<< HEAD:ptchar.c
		fprintf(stderr, "L%u: can't ptchar, value out of range\n", line_number);
=======
		fprintf(stderr, "L%u: can't pchar, value out of range", line_number);
>>>>>>> 71f2aee1077ef5d447a787911c75d279792eec14:pchar.c
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
