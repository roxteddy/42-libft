/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 22:09:24 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/03 22:11:21 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  strisint(char *str)
{
	int		i;
	int		sign;
	int		len;
	int		nb;

	if (*str == '+' || *str == '-')
		str += (*str == '+') ? (sign = 1) : -(sign = -1);
	i = (len = ft_strlen(str));
	while (--i >= 0)
	{
		if (!ft_isdigit(str[i]))
			return (0);
	}
	if (len != 10)
		return (len < 10);
	while (++i < len)
	{
		nb = (i == len - 1 && sign == -1)
			? 8 : (2147483647 / ft_pow(10, len - i - 1)) % 10;
		if (str[i] > nb + '0')
			return (0);
		if (str[i] < nb + '0')
			return (1);
	}
	return (1);
}
