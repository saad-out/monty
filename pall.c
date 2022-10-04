#include "monty.h"

/**
 * pall - prints all elements of a stack
 * @stack: pointer to top of the stack
 * @line_number: opcode's line number
 *
 * Return: void
 */
void pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *tmp;

	if (!stack)
		return;
	tmp = *stack;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->prev;
	}
}
