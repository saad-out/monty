#include "monty.h"

extern int struct_state;

/**
 * queue - change from queue mode to stack mode
 * @stack: the top of the queue/stack
 * @line_number: the location of the opcode in the bytecode
 */
void queue(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *node1, *node2, *lagging;

	if (struct_state == IN_STACK)
	{
		if (*stack && (*stack)->prev)
		{
			lagging = *stack;
			node1 = (*stack)->prev;
			while (node1)
			{
				node2 = node1->prev;

				lagging->next = node1;
				node1->prev = lagging;

				lagging = node1;
				node1 = node2;
			}
			lagging->next = NULL;
		}
		struct_state = IN_QUEUE;
	}
}
