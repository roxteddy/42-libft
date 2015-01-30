/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 20:02:40 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/30 20:49:03 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	printlst(t_list *lst)
{
	ft_putstr(lst->content);
	ft_putchar(' ');
}

void	test_nbrlen(void)
{
	printf("ft_nbrlen(123) = %d\n", (int)ft_nbrlen(123));
	printf("ft_nbrlen(-123) = %d\n", (int)ft_nbrlen(-123));
	printf("ft_nbrlen(0) = %d\n", (int)ft_nbrlen(0));
	printf("ft_nbrlen(-0) = %d\n", (int)ft_nbrlen(-0));
}

void	test_pow(void)
{
	printf("ft_pow(2, 3) = %d\n", ft_pow(2, 3));
	printf("ft_pow(2, 16) = %d\n", ft_pow(2, 16));
	printf("ft_pow(2, 0) = %d\n", ft_pow(2, 0));
	printf("ft_pow(-2, 3) = %d\n", ft_pow(-2, 3));
}

void	test_lstpushback(t_list **list)
{
	ft_lstpushback(list, ft_lstnew("2", 2));
	ft_lstpushback(list, ft_lstnew("3", 2));
	ft_lstpushback(list, ft_lstnew("4", 2));
	ft_lstpushback(list, ft_lstnew("5", 2));
}

int		main(void)
{
	t_list	*list;

	test_nbrlen();
	test_pow();
	printf("first we create and list and pushback 4 elements\n");
	list = ft_lstnew("1", 2);
	test_lstpushback(&list);
	printf("then we print the list : \n");
	ft_lstiter(list, printlst);
	ft_putendl("");
	printf("the list size is : %d\n", (int)ft_lstlen(list));
	printf("then we use ft_lstrot and print the list again : \n");
	ft_lstrot(&list);
	ft_lstiter(list, printlst);
	ft_putendl("");
	printf("then we use ft_lstrotback and print the list again : \n");
	ft_lstrotback(&list);
	ft_lstiter(list, printlst);
	ft_putendl("");
	printf("then we use ft_lstswap and print the list again : \n");
	ft_lstswap(&list);
	ft_lstiter(list, printlst);
	ft_putendl("");
	return (0);
}
