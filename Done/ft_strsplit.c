/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:46:43 by jpieczar          #+#    #+#             */
/*   Updated: 2019/06/04 16:02:56 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stdio.h>
#include <stdlib.h>

/*
 * static int	ft_wordcount(char *s, char	c)
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
}*/

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

void	ft_strsplit(const char *s, char c)
{
	//char	**str;
	//int		i;
	int		j;

	j = 0;
	//i = ft_wordcount((char*)s, c);
	while (s[j])
	{
		if (s[j] == c)
			j++;
		if (s[j] != c && s[j])
		{
			printf("%d\n", ft_wordlen((char*)&s[j], c));
			while (s[j] != c && s[j])
				j++;
		}
	}
}

int	main(int argc, char **argv)
{
	char	c;

	c = '*';
	if (argc == 2)
		ft_strsplit((const char*)argv[1], c);
	else
		return (0);
}
