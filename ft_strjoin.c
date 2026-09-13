#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i])
		{
		ptr[i] = s1[i];
		i++;
		}
	while (s2[j])
		{
		ptr[i] = s2[j];
		i++;
		j++;
		}	
	ptr[i] = '\0';
	return (ptr);
}
