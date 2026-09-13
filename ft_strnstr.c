#include "libft.h"

char	 *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && i + j < len)
			{
				j++;
				if (j == ft_strlen(little))
					return ((char *)&big[i]);
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
