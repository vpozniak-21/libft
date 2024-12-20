/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:55:05 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/20 10:23:13 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dst && size == 0)
		return (ft_strlen(src));
	while (dst[i] && i < size)
	{
		i++;
	}
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
int	main(void)
{
	char dst[20] = "Hello, ";
	const char *src = "World!";

	size_t result = ft_strlcat(dst, src, sizeof(dst));

	printf("Resulting string: %s\n", dst); // Output: "Hello, World!"
	printf("Total length (returned by ft_strlcat): %zu\n", result);
		// Output: 13

	return (0);
}*/