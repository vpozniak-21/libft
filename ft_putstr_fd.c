/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:19:14 by vpozniak          #+#    #+#             */
/*   Updated: 2024/12/19 21:25:06 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char *str = "Hello, world!";

	ft_putstr_fd(str, 1); // Print string to standard output (stdout)
	write(1, "\n", 1);    // Add a newline after the output
	ft_putstr_fd(str, 2); // Print string to standard error (stderr)
	return (0);
}*/