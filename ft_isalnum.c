/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:47:18 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/28 16:56:19 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z')
	|| (c >= 'a' && c <= 'z')
	|| (c >= '0' && c <= '9'));
}
