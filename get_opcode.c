#include "monty.h"

/**
 * get_opcode - get instruction/opcode from line
 * @line: given line
 *
 * Return: opcode (Found) | NULL (Not Found)
 */
char *get_opcode(char *line)
{
	const char *del;
	char *opcode;

	if (!line)
		return (NULL);

	del = "\n\t ";
	opcode = strtok(line, del);
	return (opcode);
}
