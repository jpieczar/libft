/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 07:53:26 by jpieczar          #+#    #+#             */
/*   Updated: 2019/07/26 07:53:33 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnode(t_node **list, char **av, int ac)
{
	t_node	*tsil;
	t_node	*back;
	int		i;

	tsil = *list;
	i = 1;
	while (i < ac)
	{
		tsil->next = ft_newdnode();
		tsil->data = ft_atoi(av[i]);
		back = tsil;
		tsil = tsil->next;
		tsil->prev = back;
		i++;
	}
	tsil = NULL;
}
