#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p = c;
		p++;
	}
	return (s);
}
