#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	i = ft_strlen(dst);
	j = 0;
	srclen = ft_strlen(src);
	dstlen = i;
	if (dstsize == 0)
		return (dstsize + srclen);
	else if (dstlen >= dstsize)
		return (dstsize + srclen);
	else 
	{	
		while (src[j] != '\0' && i != dstsize -1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (dstlen + srclen);
}