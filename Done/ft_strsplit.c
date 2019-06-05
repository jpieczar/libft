/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:46:43 by jpieczar          #+#    #+#             */
/*   Updated: 2019/06/05 07:46:59 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char *s, char	c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			res++;
			while (s[i] && (s[i] != c))
				i++;
		}
	}
	return (res);
}

static int	ft_wordlen(char *s, const char c)
{
	int	i;
	int	res;

	i = 0;
	if (s[i] == c)
		i++;
	else
	{
		res = 0;
		while (s[i] && (s[i] != c))
		{
			res++;
			i++;
		}
		return (res);
	}
	return (0);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	j = 0;
	k = 0;
	i = ft_wordcount((char*)s, c);
	if (!(str = (char**)malloc(sizeof(char*) * i)))
		return (NULL);
	while (s[j] && (k != i))
	{
		if (s[j] == c)
			j++;
		if (s[j] != c && s[j])
		{
			if(!(str[k] = (char*)malloc(sizeof(char) * ft_wordlen((char*)&s[j], c))))
				return (NULL);
			while (s[j] != c && s[j])
				j++;
		}
		k++;
	}
	return (str);
}
