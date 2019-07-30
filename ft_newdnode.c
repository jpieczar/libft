/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newdnode.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 07:53:26 by jpieczar          #+#    #+#             */
/*   Updated: 2019/07/26 07:53:33 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_newdnode(void)
{
	t_node *new;

	if (!(new = malloc(sizeof(t_node))))
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
