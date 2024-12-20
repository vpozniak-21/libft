/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:53:48 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/19 07:49:37 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*moving_pointer;

	i = 0;
	moving_pointer = (unsigned char *)s;
	while (i < n)
	{
		moving_pointer[i] = '\0';
		i++;
	}
}
/*int	main(void)
{
	char test1[] = "HelloWorld";
	char test2[] = "";
	char test3[] = " ";
	char test4[1] = {'x'};
	char test5[] = "123456789";

	ft_bzero(test1, 5);
	ft_bzero(test2, 1);
	ft_bzero(test3, 1);
	ft_bzero(test4, 1);
	ft_bzero(test5, 9);

	printf("After_bzero:\n");
	printf("Test 1: \"%s\"\n", test1);
	printf("Test 2: \"%s\"\n", test2);
	printf("Test 3: \"%s\"\n", test3);
	printf("Test 4: \"%s\"\n", test4);
	printf("Test 5: \"%s\"\n", test5);

	return (0);
}*/