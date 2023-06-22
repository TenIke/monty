#include "monty.h"

/**
 * malloc_m - displays a message when an error occurs
 */
void malloc_m(void)
{
	dprintf(2, "Error: malloc failed\n");
	ags_free();
	exit(EXIT_FAILURE);
}
