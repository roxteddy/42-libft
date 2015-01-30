/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 20:02:40 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/29 21:39:45 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

	char	abc[] = "abcdefghijklmnopqrstuvwxyz";
	printf("char* abc (%p) : %s\n", abc, abc);
	printf("memccpy result = %p - %s\n", memccpy(abc, "test\200string", '\200', 12), abc);
	printf("char* abc (%p) : %s\n", abc, abc);
	printf("ft_memccpy result = %p - %s\n", ft_memccpy(abc, "TEST\200string", '\200', 12), abc);

	printf("memcmp : %i\n", memcmp("ab\0ab", "ab\0ab", 5));
	printf("ft_memcmp : %i\n", ft_memcmp("ab\0ab", "ab\0ab", 5));

	char    testA1[] = "abcdef";
    char    testA2[] = "abcdef";

    ft_memmove(testA1 + 1, testA1, 5);
    ft_memmove(testA1 + 1, testA1, 0);
    memmove(testA2 + 1, testA2, 5);
    memmove(testA2 + 1, testA2, 0);
	printf("testA1 : %s\n", testA1);
	printf("testA2 : %s\n", testA2);

	char    buf[10];
	char	buf2[10];

    bzero(buf, 10);
	bzero(buf2, 10);
    strcpy(buf, "abc");
    strcpy(buf2, "abc");
    ft_strlcat(buf, "abcdefghijklmnop", 10);
    strlcat(buf2, "abcdefghijklmnop", 10);

	printf("ft_strlcat buf : %s\n", buf);
	printf("strlcat buf2 : %s\n", buf2);
	printf("ft_strlcat(buf, \"abcd\", 2) == %d\n", (int)ft_strlcat(buf, "abcd", 2));
	printf("ft_strlcat buf : %s\n", buf);
	printf("strlcat(buf2, \"abcd\", 2) == %d\n", (int)strlcat(buf2, "abcd", 2));
	printf("strlcat buf2 : %s\n", buf2);


    char    str[10];

    bzero(str, 10);
    strcpy(str, "un deux 9");

	printf("str : %s\n", str);
	char*	str1 = strnstr(str, "9", 3);
	printf("strnstr(str, \"9\", 3) : %s - %p\n", str1, str1);
	char*	str2 = ft_strnstr(str, "9", 3);
	printf("ft_strnstr(str, \"9\", 3) : %s - %p\n", str2, str2);

	printf("'a' + 0x100 : %d\n", 'a' + 0x100);
	printf("ft_toupper('a' + 0x100) : %c\n", ft_toupper('a' + 0x100));
	printf("toupper('a' + 0x100) : %c\n", toupper('a' + 0x100));


	printf("ft_strjoin(\"abc\", \"def\") : %s\n", ft_strjoin("abc", "def"));

	printf("ft_strdup original : %s - dup : %s\n", abc, ft_strdup(abc));

    ft_putnbr(0);
    ft_putnbr(1);
    ft_putnbr(-1);
    ft_putnbr(12300);
    ft_putnbr(10203);
    ft_putnbr(-56);
    ft_putnbr(2147483647);
    ft_putnbr(-2147483648);


	printf("ft_strnequ(\"abc\", \"abc\", 100) == %d\n", ft_strnequ("abc", "abc", 100));

	char** strtab = ft_strsplit("***salut****!**", '*');

	printf("ft_strtrim(\"\t\n  \tAAA \t BBB\t\n  \t\") : -%s-\n", ft_strtrim("\t\n  \tAAA \t BBB\t\n  \t"));

	printf("ft_pow(2, 3) = %d\n", ft_pow(2, 3));

	return (0);
}
