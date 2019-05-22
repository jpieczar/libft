/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 07:27:33 by jpieczar          #+#    #+#             */
/*   Updated: 2019/05/22 09:46:23 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	*ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while(dst[i])
		i++;
	while ((src[j]) && (j < dstsize))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return ((size_t*)dst);
}
