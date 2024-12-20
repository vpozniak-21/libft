/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:59:07 by vpozniak          #+#    #+#             */
/*   Updated: 2024/12/19 21:34:22 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	if ((char)c == '\0')
	{
		return ((char *)(s + i));
	}
	return (0);
}

/*
int	main(void)
{
	const char	*test_str = "Hello, World!";

	// Test 1: Find the last occurrence of 'o'
	printf("Test 1 (ft_strrchr): %p\n", ft_strrchr(test_str, 'o'));
	printf("Test 1 (strrchr): %p\n", strrchr(test_str, 'o'));
	// Test 2: Find the first character 'H'
	printf("Test 2 (ft_strrchr): %p\n", ft_strrchr(test_str, 'H'));
	printf("Test 2 (strrchr): %p\n", strrchr(test_str, 'H'));
	// Test 3: Find the last character '!'
	printf("Test 3 (ft_strrchr): %p\n", ft_strrchr(test_str, '!'));
	printf("Test 3 (strrchr): %p\n", strrchr(test_str, '!'));
	// Test 4: Find character 'x' (not present)
	printf("Test 4 (ft_strrchr): %p\n", ft_strrchr(test_str, 'x'));
	printf("Test 4 (strrchr): %p\n", strrchr(test_str, 'x'));
	// Test 5: Search for the null terminator
	printf("Test 5 (ft_strrchr): %p\n", ft_strrchr(test_str, '\0'));
	printf("Test 5 (strrchr): %p\n", strrchr(test_str, '\0'));
	// Test 6: Empty string
	printf("Test 6 (ft_strrchr): %p\n", ft_strrchr("", 'a'));
	printf("Test 6 (strrchr): %p\n", strrchr("", 'a'));
	// Test 7: Single character string, searching for 'a'
	printf("Test 7 (ft_strrchr): %p\n", ft_strrchr("a", 'a'));
	printf("Test 7 (strrchr): %p\n", strrchr("a", 'a'));
	// Test 8: Single character string, searching for 'b'
	printf("Test 8 (ft_strrchr): %p\n", ft_strrchr("a", 'b'));
	printf("Test 8 (strrchr): %p\n", strrchr("a", 'b'));
	// Test 9: String with spaces
	printf("Test 9 (ft_strrchr): %p\n", ft_strrchr("Hello World", ' '));
	printf("Test 9 (strrchr): %p\n", strrchr("Hello World", ' '));
	// Test 10: String with punctuation
	printf("Test 10 (ft_strrchr): %p\n", ft_strrchr("Hello, World!", ','));
	printf("Test 10 (strrchr): %p\n", strrchr("Hello, World!", ','));
	// Test 11: Multiple occurrences of 'o'
	printf("Test 11 (ft_strrchr): %p\n", ft_strrchr("Hello, Hello", 'o'));
	printf("Test 11 (strrchr): %p\n", strrchr("Hello, Hello", 'o'));
	return (0);
}
*/