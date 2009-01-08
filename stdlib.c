#include "stdlib.h"

static int *malloc_base =  0x804a000;  /* It seems to be the value choosen by glibc on ia32 */

void *malloc(size_t size)
{
	size_t retval = malloc_base;
	malloc_base += size;
	if (brk(malloc_base) == -1)
		return NULL;

	return (void *) retval;
}
