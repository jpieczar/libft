/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:11:24 by jpieczar          #+#    #+#             */
/*   Updated: 2019/05/30 16:16:35 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	if (s != NULL)
	{
		size_t	i;
		size_t	temp;
		int		j;
		char	*str;

		j = 0;
		temp = 0;
		i = (size_t)start;
		if (!(str = malloc((len + 1) * sizeof(char))))
			return (NULL);
		while (i < len)
		{
			i++;
			if (i == (size_t)start)
			{
				while (temp < len)
				{
					str[i] = s[i];
					temp++;
					i++;
				}
				str[i] = '\0';
			}
		}
	}
	return (NULL);
}
