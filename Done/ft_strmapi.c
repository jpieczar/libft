/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:20:53 by jpieczar          #+#    #+#             */
/*   Updated: 2019/05/28 09:50:35 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s1, char (*f) (unsigned int, char))
{
	if (s1 != NULL)
	{
		int		i;
		char	*str;

		i = 0;
		while(s1[i])
			i++;
		if (!(str = malloc((i + 1) * sizeof(char))))
			return (NULL);
		i = 0;
		while (s1[i])
		{
			str[i] = f(i, s1[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
