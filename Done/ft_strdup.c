/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 07:20:02 by jpieczar          #+#    #+#             */
/*   Updated: 2019/05/23 07:22:50 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*pntr;
	int	i;

	i = 0;
	while (s[i])
		i++;
	pntr = (char*)malloc((i * sizeof(char)) + 1);
	i = 0;
	while (s[i])
	{
		pntr[i] = s[i];
		i++;
	}
	return (pntr);
}
