/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:54:37 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/20 10:34:53 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove_forward(unsigned char *s1, const unsigned char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
}

void	ft_memmove_backward(unsigned char *s1, const unsigned char *s2,
		size_t n)
{
	while (n > 0)
	{
		n--;
		s1[n] = s2[n];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2 = (const unsigned char *)src;

	s1 = (unsigned char *)dest;
	if (s1 == s2)
		return (dest);
	if (s1 < s2)
		ft_memmove_forward(s1, s2, n);
	else
		ft_memmove_backward(s1, s2, n);
	return (dest);
}
/*
int	main(void) {
	char src[] = "Hello, world!";
	char dest[20];

	// Example 1: Non-overlapping memory blocks
	printf("Before ft_memmove: dest = \"%s\"\n", dest);
	ft_memmove(dest, src, 13); // Copy the entire string from src to dest
	printf("After ft_memmove (non-overlapping): dest = \"%s\"\n", dest);

	// Example 2: Overlapping memory blocks
	char overlap_src[] = "123456789";
	printf("\nBefore ft_memmove (overlapping):
	overlap_src = \"%s\"\n", overlap_src);
	ft_memmove(overlap_src + 3, overlap_src, 6); // Move "456789"
	to start at overlap_src[3]
	printf("After ft_memmove (overlapping): overlap_src = \"%s\"\n",

	overlap_src);

	return (0);
}
*/