#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list	*next;
	t_list	*new;
	t_list	*head;

	head = NULL;
	if (lst == NULL|| f == NULL)
		return (NULL);
	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new = f(lst);
	next = ft_lstnew(new->content, new->content_size);
	head = next;
	lst = lst->next;
	while (lst)
	{
		new = f(lst);
		next->next = ft_lstnew(new->content, new->content_size);
		if (!next)
			return (NULL);
		lst = lst->next;
		next = next->next;
	}
	return (head);
}
