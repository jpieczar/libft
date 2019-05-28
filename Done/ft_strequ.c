/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:27:46 by jpieczar          #+#    #+#             */
/*   Updated: 2019/05/28 08:49:04 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(const char *s1, const char *s2)
{
	if ((s1 != NULL) && (s2 != NULL))
	{
		if (s1[0] != s2[0])
			return (0);
		int	i;

		i = 0;
		while ((s1[i] == s2[i]) && (s1[i] != '\0'))
			i++;
		if (s1[i] != s2[i])
			return (0);
		else
			return (1);
	}
	return (0);
}
