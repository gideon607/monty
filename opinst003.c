#include "monty.h"
/**
 * _pop - removes elemmt of the list.
 *
 * @doubly: head in the list.
 * @cline: line no.
 * Return: no return
 */
void _pop(stack_t **doubly, unsigned int cline)
{
	stack_t *aux;

	if (doubly == NULL || *doubly == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}
	aux = *doubly;
	*doubly = (*doubly)->next;
	free(aux);
}
