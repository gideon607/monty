#include "monty.h"

global_t vglo;

/**
 * free_vglo - frees global variables.
 *
 * Return: no return null
 */
void free_vglo(void)
{
	free_dlistint(vglo.head);
	free(vglo.buffer);
	fclose(vglo.fd);
}

/**
 * start_vglo - initializes global variables.
 *
 * @fd: file descriptors.
 * Return: no return null
 */
void start_vglo(FILE *fd)
{
	vglo.lifo = 1;
	vglo.cont = 1;
	vglo.arg = NULL;
	vglo.head = NULL;
	vglo.fd = fd;
	vglo.buffer = NULL;
}
