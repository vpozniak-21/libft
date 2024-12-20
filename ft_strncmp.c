/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:55:18 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/19 20:43:32 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	{
		i = 0;
		while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
		{
			if (s1[i] != s2[i])
			{
				return ((unsigned char)s1[i] - (unsigned char)s2[i]);
			}
			i++;
		}
		return (0);
	}
}
/*
int	main(void)
{
	char *str1 = "hello";
	char *str2 = "hello world";
	int result = ft_strncmp(str1, str2, ft_strlen(str2));

	printf("%d", result);

	return (0);
}*/