/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:54:32 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/19 21:26:37 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	unsigned char		char_in_str;

	i = 0;
	str = (const unsigned char *)s;
	char_in_str = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == char_in_str)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*     ----Start of the the check-----

void	test_ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*result;

	result = ft_memchr(s, c, n);
	if (result != NULL)
	{
		printf("Found at: %s\n", result);
			// If found,print the rest of the string starting from the match
	}
	else
	{
		printf("Not Found (NULL)\n"); // If not found, print Not Found
	}
}

int	main(void)
{
	// Test case 1
	const char *str1 = "Hello, world!";
	printf("Test Case 1: Searching for 'o' in \"%s\"\n", str1);
	test_ft_memchr(str1, 'o', strlen(str1)); // Searching for 'o'

	// Test case 2
	const char *str2 = "Goodbye!";
	printf("\nTest Case 2: Searching for 'x' in \"%s\"\n", str2);
	test_ft_memchr(str2, 'x', strlen(str2)); // Searching for 'x' (not present)

	// Test case 3
	const char *str3 = "Hello, world!";
	printf("\nTest Case 3: Searching for 'H' in \"%s\"\n", str3);
	test_ft_memchr(str3, 'H', strlen(str3));
		// Searching for 'H' (start of the string)

	// Test case 4
	const char *str4 = "Hello, world!";
	printf("\nTest Case 4: Searching for '!' in \"%s\"\n", str4);
	test_ft_memchr(str4, '!', strlen(str4));
		// Searching for '!' (end of the string)

	// Test case 5
	const char *str5 = "This won't match";
	printf("\nTest Case 5: Searching for 'T' in an empty range\n");
	test_ft_memchr(str5, 'T', 0); // Searching with zero bytes

	// Test case 6
	const char *str6 = "";
	printf("\nTest Case 6: Searching for 'a' in an empty string\n");
	test_ft_memchr(str6, 'a', strlen(str6)); // Searching in an empty string

	// Test case 7
	const char *str7 = "Hello, world!";
	printf("\nTest Case 7: Searching for 'w' within first 5 characters
	of \"%s\"\n",
		str7);
	test_ft_memchr(str7, 'w', 5);
		// Searching within first 5 characters,'w' is at index 7

	return (0);
}*/