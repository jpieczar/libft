/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:10:19 by jpieczar          #+#    #+#             */
/*   Updated: 2019/05/21 14:29:32 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	p;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			p = i;
			while (needle[j] != '\0')
			{
				if (needle[j] != haystack[i])
					return (NULL);
				j++;
				i++;
			}
			return ((char*)&haystack[p]);
		}
		i++;
	}
	return (NULL);
}
