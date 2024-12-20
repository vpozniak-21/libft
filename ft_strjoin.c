/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:55:27 by vpozniak          #+#    #+#             */
/*   Updated: 2024/12/18 15:39:25 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

// size_t	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat_str_ptr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	cat_str_ptr = (char *)malloc((sizeof(char) * (ft_strlen(s1)
					+ ft_strlen(s2))) + 1);
	if (!cat_str_ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		cat_str_ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		cat_str_ptr[i + j] = s2[j];
		j++;
	}
	cat_str_ptr[i + j] = '\0';
	return (cat_str_ptr);
}
/*
int	main(void)
{
	char const *s1 = "Fuck the patriarchy ";
	char const *s2 = " patriarchy ";

	printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/