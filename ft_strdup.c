#include "libft.h"

char *ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;
		
	ptr = malloc(ft_strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}	

