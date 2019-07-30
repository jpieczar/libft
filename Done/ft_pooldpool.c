/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pooldpool.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <jpieczar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 11:41:01 by jpieczar          #+#    #+#             */
/*   Updated: 2019/07/29 11:41:09 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_pooldpool(t_node **list)
{
	t_node	*tsil;

	tsil = *list;
	while (tsil->next)
		tsil = tsil->next;
	tsil = tsil->prev;
	while (tsil)
	{
		ft_putnbr(tsil->data);
		ft_putendl("");
		tsil = tsil->prev;
	}
}
