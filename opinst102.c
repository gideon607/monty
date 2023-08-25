#include "monty.h"
/**
 * _nop - does not do anything just here.
 * @doubly: head of the linked list.
 * @cline: line number;
 * Return: no return or null.
 */
void _nop(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;
}

/**
 * _sub - subtracts elemnet of the second.
 * @doubly: head of the list.
 * @cline: line no.
 * Return: no return or null
 */
void _sub(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n -= (*doubly)->n;
	_pop(doubly, cline);
}