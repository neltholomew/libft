#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	
	i = 0;
	j = start;
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	while (start <= ft_strlen(s) && j < start + len && s[j] != '\0')
		{
		ptr[i] = s[j];
		i++;
		j++;
		}
	ptr[i] = '\0';
	return (ptr);
}
