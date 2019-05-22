/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:31:50 by jpieczar          #+#    #+#             */
/*   Updated: 2019/05/22 09:14:44 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t	i;
    int		j;
    int		p;

    i = 0;
    j = 0;
    if (needle[i] == '\0')
        return ((char*)haystack);
    while ((haystack[i] != '\0') && (i < len))
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
