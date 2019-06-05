/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:56:40 by jpieczar          #+#    #+#             */
/*   Updated: 2019/06/05 09:16:42 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if ((s1 != NULL) && (s2 != NULL))
	{
		if (s1[0] != s2[0])
			return (0);
		while (((s1[i] == s2[i]) && (s1[i] != '\0')) && (i < n))
			i++;
		if (s1[i] != s2[i])
			return (0);
		else
			return (1);
	}
	return (0);
}
