/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:54:40 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/19 21:24:56 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void) {
	char buffer[20] = "Hello, world!";
	char buffer2[20] = "Another test!";

	// Example 1: Filling with a specific character
	printf("Before ft_memset: %s\n", buffer);
	ft_memset(buffer, '*', 5); // Fill the first 5 characters with '*'
	printf("After ft_memset: %s\n", buffer);

	// Example 2: Resetting memory to '\0'
	printf("\nBefore ft_memset: %s\n", buffer2);
	ft_memset(buffer2, '\0', sizeof(buffer2)); // Set all characters to '\0'
	printf("After ft_memset (clearing memory): \"%s\"\n", buffer2);

	// Example 3: Using ft_memset to initialize an array
	int arr[5];
	ft_memset(arr, 0, sizeof(arr)); // Set all bytes of the array to 0
	printf("\nArray after ft_memset to 0:\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return (0);
}*/