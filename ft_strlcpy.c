/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:55:10 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/19 21:25:24 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char dst[10];
	const char *src = "Hello, World!";

	size_t result = ft_strlcpy(dst, src, sizeof(dst));

	printf("Destination string: %s\n", dst); // Output: "Hello, Wo"
	printf("Total length (returned by ft_strlcpy): %zu\n", result);
		// Output: 13

	return (0);
}*/