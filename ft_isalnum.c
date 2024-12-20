/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:53:54 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/19 21:24:30 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{

	char c1 = 'A';
	char c2 = 'z';
	char c3 = '1';
	char c4 = '9';
	char c5 = '@';
	char c6 = ' ';
	char c7 = '#';
	char c8 = '0';

	printf("Character: '%c' -> ft_isalnum: %d\n", c1, ft_isalnum(c1));
	printf("Character: '%c' -> ft_isalnum: %d\n", c2, ft_isalnum(c2));
	printf("Character: '%c' -> ft_isalnum: %d\n", c3, ft_isalnum(c3));
	printf("Character: '%c' -> ft_isalnum: %d\n", c4, ft_isalnum(c4));
	printf("Character: '%c' -> ft_isalnum: %d\n", c5, ft_isalnum(c5));
	printf("Character: '%c' -> ft_isalnum: %d\n", c6, ft_isalnum(c6));
	printf("Character: '%c' -> ft_isalnum: %d\n", c7, ft_isalnum(c7));
	printf("Character: '%c' -> ft_isalnum: %d\n", c8, ft_isalnum(c8));

	return (0);
}*/
