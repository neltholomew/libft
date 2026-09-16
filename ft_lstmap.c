#include "libft.h"

static t_list	*lstmap_fail(t_list **result, void *content, void (*del)(void *))
{
	if (content)
		del(content);
	ft_lstclear(result, del);
	return (NULL);
}

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
		if (!content)
			return (lstmap_fail(&result, NULL, del));
		new = ft_lstnew(content);
		if (!new)
			return (lstmap_fail(&result, content, del));
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}
