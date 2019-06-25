/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:31:50 by jpieczar          #+#    #+#             */
/*   Updated: 2019/05/24 10:47:48 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	p;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while ((haystack[i] != '\0') && (i < len))
	{
		if (haystack[i] == needle[0])
		{
			p = i;
			while (needle[j] != '\0')
			{
				if (needle[j] != haystack[i])
					return (NULL);
				j++;
				i++;
			}
			return ((char*)&haystack[p]);
		}
		i++;
	}
	return (NULL);
}
