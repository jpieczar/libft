#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if (!(new->content = ft_strdup(content)))
			return (NULL);
		new->content_size = (size_t)malloc(content_size);
	}
	new->next = NULL;
	return (new);
}
