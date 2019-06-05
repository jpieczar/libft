/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:16:55 by jpieczar          #+#    #+#             */
/*   Updated: 2019/06/05 08:05:29 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	else
	{
		while (n > 0)
		{
			n /= 10;
			i++;
		}
		return (i);
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		w;

	w = 1;
	len = 0;
	if (n < 0)
	{
		w = 0;
		n *= -1;
		len++;
	}
	len += ft_len(n);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = ((n % 10) + 48);
		n /= 10;
		len--;
	}
	if (w == 0)
		str[0] = '-';
	return (str);
}
