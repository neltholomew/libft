#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;
	size_t	len;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
