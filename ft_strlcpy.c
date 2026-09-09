#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	else if (ft_strlen(src) < dstsize)
	{	
		while (s[i] != '\0')
		{
			d[i] = s[i];
			i++;
		}
		d[i] = '\0';
	}
	else
	{
		while (i < dstsize - 1)
		{
			d[i] = s[i];
			i++;
		}
		d[i] = '\0';
	}
	return (ft_strlen(src));
}
