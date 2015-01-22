/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 20:02:40 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/20 21:40:15 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	printf("'42' with atoi() : %d\n", atoi("42"));
	printf("'42' with ft_atoi() : %d\n", ft_atoi("42"));
	printf("'+42' with atoi() : %d\n", atoi("+42"));
	printf("'+42' with ft_atoi() : %d\n", ft_atoi("+42"));
	printf("'-42' with atoi() : %d\n", atoi("-42"));
	printf("'-42' with ft_atoi() : %d\n", ft_atoi("-42"));
	printf("'+-42' with atoi() : %d\n", atoi("+-42"));
	printf("'+-42' with ft_atoi() : %d\n", ft_atoi("+-42"));

	return (0);
}
