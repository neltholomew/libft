#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{	
		i++;
	}
	if (s[i] != c)
		return(NULL);
	return ((char *)&s[i]);
}
