#include "monty.h"

/**
 * get_instruction - get opcode's matching function
 * @opcode: given opcode
 *
 * Return: pointer to matching function | NULL (Invalid opcode)
 */
void (*get_instruction(char *opcode))(stack_t **, unsigned int)
{
	instruction_t list[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};
	unsigned int i;

	for (i = 0; list[i].opcode; i++)
		if (strcmp(opcode, list[i].opcode) == 0)
			return (list[i].f);

	return (NULL);
}
