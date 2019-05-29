/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:11:24 by jpieczar          #+#    #+#             */
/*   Updated: 2019/05/28 14:02:43 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	if (s != NULL)
	{
		size_t	i;
		int		j;
		char	*str;

		j = 0;
		i = (size_t)start;
		if (!(str = malloc((len + 1) * sizeof(char))))
			return (NULL);
		while (i < len)
		{
			str[j] = s[i];
			i++;
			j++;
		}
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
