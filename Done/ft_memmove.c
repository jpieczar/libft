/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:37:35 by jpieczar          #+#    #+#             */
/*   Updated: 2019/05/24 09:53:40 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*p1;
	char	*p2;

	i = 0;
	p1 = (char*)dst;
	p2 = (char*)src;
	while ((i < len) && (p2[i]))
	{
		p1[i] = p2[i];
		i++;
	}
	return ((void*)dst);
}
