#ifndef H
#define H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void read_monty(int);
void execute_monty(char *, unsigned int, stack_t **);
char *get_opcode(char *line);
void (*get_instruction(char *opcode))(stack_t **, unsigned int);
void push(stack_t **stack, unsigned int line_number);
stack_t *add_to_TOS(stack_t **stack, int n);
void pall(stack_t **stack, __attribute__((unused))unsigned int line_number);
ssize_t _getline(char **, size_t *, int);
void free_stack(stack_t *stack);
int _atoi(char *nptr, char **endptr, int base);
void pop(stack_t **, unsigned int);
void add(stack_t **stack, unsigned int line_number);

void pint(stack_t **stack, __attribute__((unused))unsigned int line_number);
#endif /* H */
