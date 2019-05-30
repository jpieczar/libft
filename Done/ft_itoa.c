/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:32:54 by jpieczar          #+#    #+#             */
/*   Updated: 2019/05/30 13:45:27 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		temp;
	char	*str;
	char	mul;

	i = 0;
	temp = n;
	if (n < 0)
	{
		n *= -1;
		mul = '-';
		i++;
	}
	while (temp > 0)
	{
		temp /= 10;
		i++;
	}
	if (!(str = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	return (str);
}
