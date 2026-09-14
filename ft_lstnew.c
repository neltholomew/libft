#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*next;

	next = ft_calloc(1, sizeof(t_list));
	if (next == NULL)
		return(NULL);
	next -> content = content;
	return (next);
}
