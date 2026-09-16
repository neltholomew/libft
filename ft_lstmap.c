#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*new;
	void	*content;

	result = NULL;
	if (!f)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		new = NULL;
		if (content)
			new = ft_lstnew(content);
		if (!new)
		{
			if (content)
				del(content);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}
