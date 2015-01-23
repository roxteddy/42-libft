/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:30:48 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/22 19:11:06 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dup;

	i = 0;
	while(s1[i])
		i++;
	if (!(dup = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	dup[i] = '\0';
	while (i--)
		dup[i] = s1[i];
	return (dup);
}
