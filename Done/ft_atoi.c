/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpieczar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:12:42 by jpieczar          #+#    #+#             */
/*   Updated: 2019/05/20 10:12:46 by jpieczar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnum(const char *str)
{
	int	i;

	i = 0;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i])
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	if (ft_isnum(&*str))
	{
		int	i;
		int	res;
		int	mul;

		i = 0;
		mul = 1;
		if ((str[i] == '-') || (str[i] == '+'))
		{
			if (str[i] == '-')
				mul = (-1);
			i++;
		}
		res = (str[i] - 48);
		i++;
		while (str[i])
		{
			res = ((res * 10) + (str[i] - 48));
			i++;	
		}
		return (res * mul);
	}
	else
		return (0);
}
