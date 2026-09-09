#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;
	size_t				j;
	size_t				indst;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = ft_strlen(dst);
	j = 0;
	indst = i;
	if (dstsize == 0)
		return (i + ft_strlen(src));
	else if (ft_strlen(dst) >= dstsize)
		return (i + ft_strlen(src));
	else 
	{	
		while (s[j] != '\0' && i != dstsize -1)
		{
			d[i] = s[j];
			i++;
			j++;
		}
		d[i] = '\0';
	}
	return (indst + ft_strlen(src));
}