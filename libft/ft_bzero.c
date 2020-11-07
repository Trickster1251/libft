#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *list;

	list = (unsigned char*)s;
	while(n--)
		*list++ = '\0';
}

