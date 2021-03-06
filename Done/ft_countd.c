/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 09:48:23 by jpieczar          #+#    #+#             */
/*   Updated: 2019/07/30 09:48:27 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countd(t_node **list)
{
	int		i;
	t_node	*tsil;

	i = 0;
	tsil = *list;
	while (tsil->next)
	{
		i++;
		tsil = tsil->next;
	}
	return (i);
}
