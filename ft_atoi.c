/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:53:42 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/19 22:17:47 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Each time we process a new digit in the string, we shift the existing
//result by one place to the left
//result = result * 10 + (str[i] - '0');
int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] < '0' || str[i
				+ 1] > '9')
			return (0);
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}

/*
int	main(void)
{
	const char *test1 = "42";
	const char *test2 = "   -123";
	const char *test3 = "   +456";
	const char *test4 = "\t\n\v\f\r 789";
	const char *test5 = "   --123";
	const char *test6 = "   ++123";
	const char *test7 = "   +-123";
	const char *test8 = "123abc456";
	const char *test9 = "abc123";
	const char *test10 = "";
	const char *test11 = "   ";
	const char *test12 = "2147483647";
	const char *test13 = "-2147483648";
	const char *test14 = "2147483648";
	const char *test15 = "-2147483649";
	const char *test16 = "000123";
	const char *test17 = "-000456";
	const char *test18 = "   +00000789";
	const char *test19 = "+0";
	const char *test20 = "-0";

	printf("Test 1: \"%s\" -> %d\n", test1, ft_atoi(test1));
	printf("Test 2: \"%s\" -> %d\n", test2, ft_atoi(test2));
	printf("Test 3: \"%s\" -> %d\n", test3, ft_atoi(test3));
	printf("Test 4: \"%s\" -> %d\n", test4, ft_atoi(test4));
	printf("Test 5: \"%s\" -> %d\n", test5, ft_atoi(test5));
	printf("Test 6: \"%s\" -> %d\n", test6, ft_atoi(test6));
	printf("Test 7: \"%s\" -> %d\n", test7, ft_atoi(test7));
	printf("Test 8: \"%s\" -> %d\n", test8, ft_atoi(test8));
	printf("Test 9: \"%s\" -> %d\n", test9, ft_atoi(test9));
	printf("Test 10: \"%s\" -> %d\n", test10, ft_atoi(test10));
	printf("Test 11: \"%s\" -> %d\n", test11, ft_atoi(test11));
	printf("Test 12: \"%s\" -> %d\n", test12, ft_atoi(test12));
	printf("Test 13: \"%s\" -> %d\n", test13, ft_atoi(test13));
	printf("Test 14: \"%s\" -> %d\n", test14, ft_atoi(test14));
	printf("Test 15: \"%s\" -> %d\n", test15, ft_atoi(test15));
	printf("Test 16: \"%s\" -> %d\n", test16, ft_atoi(test16));
	printf("Test 17: \"%s\" -> %d\n", test17, ft_atoi(test17));
	printf("Test 18: \"%s\" -> %d\n", test18, ft_atoi(test18));
	printf("Test 19: \"%s\" -> %d\n", test19, ft_atoi(test19));
	printf("Test 20: \"%s\" -> %d\n", test20, ft_atoi(test20));

printf("Test 1: \"%s\" -> %d\n", test1, atoi(test1));
	printf("Test 2: \"%s\" -> %d\n", test2, atoi(test2));
	printf("Test 3: \"%s\" -> %d\n", test3, atoi(test3));
	printf("Test 4: \"%s\" -> %d\n", test4, atoi(test4));
	printf("Test 5: \"%s\" -> %d\n", test5, atoi(test5));
	printf("Test 6: \"%s\" -> %d\n", test6, atoi(test6));
	printf("Test 7: \"%s\" -> %d\n", test7, atoi(test7));
	printf("Test 8: \"%s\" -> %d\n", test8, atoi(test8));
	printf("Test 9: \"%s\" -> %d\n", test9, atoi(test9));
	printf("Test 10: \"%s\" -> %d\n", test10, atoi(test10));
	printf("Test 11: \"%s\" -> %d\n", test11, atoi(test11));
	printf("Test 12: \"%s\" -> %d\n", test12, atoi(test12));
	printf("Test 13: \"%s\" -> %d\n", test13, atoi(test13));
	printf("Test 14: \"%s\" -> %d\n", test14, atoi(test14));
	printf("Test 15: \"%s\" -> %d\n", test15, atoi(test15));
	printf("Test 16: \"%s\" -> %d\n", test16, atoi(test16));
	printf("Test 17: \"%s\" -> %d\n", test17, atoi(test17));
	printf("Test 18: \"%s\" -> %d\n", test18, atoi(test18));
	printf("Test 19: \"%s\" -> %d\n", test19, atoi(test19));
	printf("Test 20: \"%s\" -> %d\n", test20, atoi(test20));
	return (0);
}*/