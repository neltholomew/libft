#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (s > d)
		while (n--)
		{
			*d = *s;
			d++;
			s++;
		}
	else
		while (n--)
		{
			*(d + n) = *(s + n);
		}
	return (dst);
}
