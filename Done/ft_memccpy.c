/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:41:33 by jpieczar          #+#    #+#             */
/*   Updated: 2019/05/23 11:36:53 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*p1;
	char	*p2;

	i = 0;
	p1 = (char*)dst;
	p2 = (char*)src;
	while (i < n)
	{
		if (p2[i] == (unsigned char)c)
		{
			return (dst+i+1);
		}
		else
			p1[i] = p2[i];
		i++;
	}
	return (NULL);
}
