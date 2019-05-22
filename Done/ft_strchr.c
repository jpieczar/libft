/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 07:22:27 by jpieczar          #+#    #+#             */
/*   Updated: 2019/05/22 13:26:22 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s[i] == '\0')
		return ((char*)s);
	while (s[i])
	{
		if (s[i] == c)
			return ((char*)&s[i]);
		i++;
	}
	return (NULL);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	a;

		a = (argv[2][0]);
		printf("ft_strchr >> %s\n", ft_strchr(&*argv[1], a));
		printf("strchr    >> %s\n", strchr(&*argv[1], a));
	}
	else
		return (0);
	return (0);
}
