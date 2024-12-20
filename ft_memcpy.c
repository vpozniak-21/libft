/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:25:28 by vpozniak          #+#    #+#             */
/*   Updated: 2024/12/20 10:16:01 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 If src and dest overlap, the behavior is undefined. In such cases,
 memmove should be used instead.
 */
#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char src[] = "Hello, World!";
	char dest[50];

	// Test 1: Basic memcpy
	ft_memcpy(dest, src, strlen(src) + 1);  // +1 to include the null terminator
	printf("Test 1: Copied string: %s\n", dest);  // Expected: "Hello, World!"

	// Test 2: Overwriting part of the destination
	char dest2[50] = "Initial text";
	// Copy to the end of the initial text
	ft_memcpy(dest2 + 8, src, strlen(src) + 1);

	printf("Test 2: Copied text to the destination: %s\n", dest2);
		// Expected: "Initial Hello, World!"

	return (0);
}*/