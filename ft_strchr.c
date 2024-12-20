/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:30:59 by vpozniak          #+#    #+#             */
/*   Updated: 2024/12/19 23:58:15 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		s++;
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
	char	*result;

	// Test cases for ft_strchr
	printf("Testing ft_strchr:\n");
	// Test 1: Basic test (find 'o' in the string)
	result = ft_strchr(test_str, 'o');
	printf("Test 1: ");
	if (result && *result == 'o') {
		printf("Pointer to 'o' found at memory address: %p\n", result);
	} else {
		printf("'o' not found\n");
	}
	// Test 2: Find 'H' at the beginning of the string
	result = ft_strchr(test_str, 'H');
	printf("Test 2: ");
	if (result && *result == 'H') {
		printf("Pointer to 'H' found at memory address: %p\n", result);
	} else {
		printf("'H' not found\n");
	}
	// Test 3: Find '!' at the end of the string
	result = ft_strchr(test_str, '!');
	printf("Test 3: ");
	if (result && *result == '!') {
		printf("Pointer to '!' found at memory address: %p\n", result);
	} else {
		printf("'!' not found\n");
	}
	// Test 4: Find 'x' that is not in the string
	result = ft_strchr(test_str, 'x');
	printf("Test 4: ");
	if (result) {
		printf("Pointer to 'x' found at memory address: %p\n", result);
	} else {
		printf("'x' not found\n");
	}
	// Test 5: Search for the null terminator '\0'
	result = ft_strchr(test_str, '\0');
	printf("Test 5: ");
	if (result) {
		printf("Pointer to null terminator found at memory address: %p\n",
			result);
	} else {
		printf("Null terminator not found\n");
	}
	// Test 6: Empty string
	result = ft_strchr("", 'a');
	printf("Test 6: ");
	if (result) {
		printf("Pointer to 'a' found at memory address: %p\n", result);
	} else {
		printf("'a' not found in empty string\n");
	}
	// Test 7: Single character string, searching for that character
	result = ft_strchr("a", 'a');
	printf("Test 7: ");
	if (result && *result == 'a') {
		printf("Pointer to 'a' found at memory address: %p\n", result);
	} else {
		printf("'a' not found\n");
	}
	// Test 8: Single character string, searching for a different character
	result = ft_strchr("a", 'b');
	printf("Test 8: ");
	if (result) {
		printf("Pointer to 'b' found at memory address: %p\n", result);
	} else {
		printf("'b' not found\n");
	}
	// Test 9: String with spaces
	result = ft_strchr("Hello World", ' ');
	printf("Test 9: ");
	if (result && *result == ' ') {
		printf("Pointer to space found at memory address: %p\n", result);
	} else {
		printf("Space not found\n");
	}
	// Test 10: String with punctuation
	result = ft_strchr("Hello, World!", ',');
	printf("Test 10: ");
	if (result && *result == ',') {
		printf("Pointer to ',' found at memory address: %p\n", result);
	} else {
		printf("',' not found\n");
	}
	// Test 11: Searching for character in a string with multiple occurrences
	result = ft_strchr("Hello, Hello", 'o');
	printf("Test 11: ");
	if (result && *result == 'o') {
		printf("Pointer to 'o' found at memory address: %p\n", result);
	} else {
		printf("'o' not found\n");
	}
	printf("\nTesting strchr:\n");
	// Test cases for strchr (standard library)
	// Test 1: Basic test (find 'o' in the string)
	result = strchr(test_str, 'o');
	printf("Test 1: ");
	if (result && *result == 'o') {
		printf("Pointer to 'o' found at memory address: %p\n", result);
	} else {
		printf("'o' not found\n");
	}
	// Test 2: Find 'H' at the beginning of the string
	result = strchr(test_str, 'H');
	printf("Test 2: ");
	if (result && *result == 'H') {
		printf("Pointer to 'H' found at memory address: %p\n", result);
	} else {
		printf("'H' not found\n");
	}
	// Test 3: Find '!' at the end of the string
	result = strchr(test_str, '!');
	printf("Test 3: ");
	if (result && *result == '!') {
		printf("Pointer to '!' found at memory address: %p\n", result);
	} else {
		printf("'!' not found\n");
	}
	// Test 4: Find 'x' that is not in the string
	result = strchr(test_str, 'x');
	printf("Test 4: ");
	if (result) {
		printf("Pointer to 'x' found at memory address: %p\n", result);
	} else {
		printf("'x' not found\n");
	}
	// Test 5: Search for the null terminator '\0'
	result = strchr(test_str, '\0');
	printf("Test 5: ");
	if (result) {
		printf("Pointer to null terminator found at memory address: %p\n",
			result);
	} else {
		printf("Null terminator not found\n");
	}
	// Test 6: Empty string
	result = strchr("", 'a');
	printf("Test 6: ");
	if (result) {
		printf("Pointer to 'a' found at memory address: %p\n", result);
	} else {
		printf("'a' not found in empty string\n");
	}
	// Test 7: Single character string, searching for that character
	result = strchr("a", 'a');
	printf("Test 7: ");
	if (result && *result == 'a') {
		printf("Pointer to 'a' found at memory address: %p\n", result);
	} else {
		printf("'a' not found\n");
	}
	// Test 8: Single character string, searching for a different character
	result = strchr("a", 'b');
	printf("Test 8: ");
	if (result) {
		printf("Pointer to 'b' found at memory address: %p\n", result);
	} else {
		printf("'b' not found\n");
	}
	// Test 9: String with spaces
	result = strchr("Hello World", ' ');
	printf("Test 9: ");
	if (result && *result == ' ') {
		printf("Pointer to space found at memory address: %p\n", result);
	} else {
		printf("Space not found\n");
	}
	// Test 10: String with punctuation
	result = strchr("Hello, World!", ',');
	printf("Test 10: ");
	if (result && *result == ',') {
		printf("Pointer to ',' found at memory address: %p\n", result);
	} else {
		printf("',' not found\n");
	}
	// Test 11: Searching for character in a string with multiple occurrences
	result = strchr("Hello, Hello", 'o');
	printf("Test 11: ");
	if (result && *result == 'o') {
		printf("Pointer to 'o' found at memory address: %p\n", result);
	} else {
		printf("'o' not found\n");
	}
	return (0);
}
*/