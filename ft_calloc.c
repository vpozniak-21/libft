/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:53:51 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/19 23:39:30 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
size_t nmemb - the number of elements in the array;
size_t size - the weight of each byte of each element within the array
*/
#include "libft.h"
#include <stdint.h>
#include <string.h> // for srcpy in main

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*mem_slot_ptr;
	size_t			max_limit;

	max_limit = SIZE_MAX;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size > max_limit / nmemb)
		return (NULL);
	mem_slot_ptr = (void *)malloc(nmemb * size);
	if (!mem_slot_ptr)
		return (NULL);
	ft_bzero(mem_slot_ptr, nmemb * size);
	return (mem_slot_ptr);
}

/*
int	main(void)
{
	void	*result;
	int		zeroed;

	printf("Testing ft_calloc:\n");
	// Test 1: Normal allocation
	result = ft_calloc(5, sizeof(int));
	if (result)
	{
		printf("Test 1: ft_calloc(5, sizeof(int)) - Passed\n");
		free(result);
	}
	else
	{
		printf("Test 1: ft_calloc(5, sizeof(int)) - Failed\n");
	}
	// Test 2: Zero elements
	result = ft_calloc(0, sizeof(int));
	if (result == NULL)
		printf("Test 2: ft_calloc(0, sizeof(int)) - Passed\n");
	else
	{
		printf("Test 2: ft_calloc(0, sizeof(int)) - Failed\n");
		free(result);
	}
	// Test 3: Zero size
	result = ft_calloc(5, 0);
	if (result == NULL)
		printf("Test 3: ft_calloc(5, 0) - Passed\n");
	else
	{
		printf("Test 3: ft_calloc(5, 0) - Failed\n");
		free(result);
	}
	// Test 4: Large allocation (likely to fail)
	result = ft_calloc(SIZE_MAX, 2);
	if (result == NULL)
		printf("Test 4: ft_calloc(SIZE_MAX, 2) - Passed\n");
	else
	{
		printf("Test 4: ft_calloc(SIZE_MAX, 2) - Failed\n");
		free(result);
	}
	// Test 5: Check if memory is zeroed out
	result = ft_calloc(10, sizeof(char));
	if (result)
	{
		zeroed = 1;
		for (size_t i = 0; i < 10; i++)
		{
			if (((char *)result)[i] != 0)
			{
				zeroed = 0;
				break ;
			}
		}
		if (zeroed)
			printf("Test 5: ft_calloc(10, sizeof(char)) -
			Memory is zeroed out - Passed\n");
		else
			printf("Test 5: ft_calloc(10, sizeof(char)) -
			Memory is not zeroed out - Failed\n");
		free(result);
	}
	else
	{
		printf("Test 5: ft_calloc(10, sizeof(char)) - Failed\n");
	}
	// Test 6: Small allocation
	result = ft_calloc(1, sizeof(char));
	if (result)
	{
		printf("Test 6: ft_calloc(1, sizeof(char)) - Passed\n");
		free(result);
	}
	else
	{
		printf("Test 6: ft_calloc(1, sizeof(char)) - Failed\n");
	}
	// Test 7: Allocate a string and check contents
	result = ft_calloc(6, sizeof(char));
	if (result)
	{
		strcpy((char *)result, "Hello");
		printf("Test 7: ft_calloc(6, sizeof(char)) - Contents: \"%s\" -
		Passed\n", (char *)result);
		free(result);
	}
	else
	{
		printf("Test 7: ft_calloc(6, sizeof(char)) - Failed\n");
	}
	return (0);
}
*/