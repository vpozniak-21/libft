/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:19:21 by vpozniak          #+#    #+#             */
/*   Updated: 2024/12/19 21:20:03 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdlib.h>

// function that checks characters backwards and forward
int	is_the_same(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed_str;

	if (ft_strlen(s1) == 0 || ft_strlen(set) == 0)
		return (ft_strdup((char *)s1));
	start = 0;
	while (is_the_same(s1[start], (char *)set))
		start++;
	end = ft_strlen(s1) - 1;
	while (is_the_same(s1[end], (char *)set) && end > 0)
		end--;
	if (start > end)
		len = 0;
	else
		len = end - start + 1;
	trimmed_str = malloc(len + 1);
	if (!trimmed_str)
		return (NULL);
	while (start <= end)
		*trimmed_str++ = s1[start++];
	*trimmed_str = '\0';
	return (trimmed_str - len);
}

/*
int	main(void)
{
	char *s1 = "   Hello, World!   ";
	char *set = " ";
	printf("%s", ft_strtrim(s1, set));
}*/