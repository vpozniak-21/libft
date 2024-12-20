/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:54:35 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/19 21:24:49 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <string.h>// for strlen
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
int	main(void) {
	// Test 1: Identical memory blocks
	char str1[] = "Hello, World!";
	char str2[] = "Hello, World!";
	printf("Test 1: %d\n", ft_memcmp(str1, str2, strlen(str1)));
	// Test 2: Different memory blocks
	char str3[] = "Hello, World!";
	char str4[] = "Hello, Earth!";
	printf("Test 2: %d\n", ft_memcmp(str3, str4, strlen(str3)));

	// Test 3: Compare only part of the string (should match)
	char str5[] = "Hello, World!";
	char str6[] = "Hello, Earth!";
	printf("Test 3: %d\n", ft_memcmp(str5, str6, 5));

	// Test 4: Memory blocks of different sizes
	char str7[] = "ABC";
	char str8[] = "ABCDEF";
	printf("Test 4: %d\n", ft_memcmp(str7, str8, 3));

	// Test 5: Comparing empty memory blocks
	char str9[] = "";
	char str10[] = "";
	printf("Test 5: %d\n", ft_memcmp(str9, str10, 0));

	// Test 6: Compare bytes with different values
	unsigned char arr1[] = {0x01, 0x02, 0x03};
	unsigned char arr2[] = {0x01, 0x02, 0x04};
	printf("Test 6: %d\n", ft_memcmp(arr1, arr2, 3));

	// Test 7: Compare single byte arrays
	unsigned char byte1[] = {0xFF};
	unsigned char byte2[] = {0xFE};
	printf("Test 7: %d\n", ft_memcmp(byte1, byte2, 1));

	return (0);
}*/