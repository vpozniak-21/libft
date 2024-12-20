/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 18:39:36 by vpozniak          #+#    #+#             */
/*   Updated: 2024/12/19 23:43:10 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//file descriptor (fd)
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	// Example 1: Write to standard output
	ft_putchar_fd('H', 1); // Prints: H
	ft_putchar_fd('\n', 1); // Prints: (newline)

	// Example 2: Write to standard error
	ft_putchar_fd('E', 2); // Prints: E to stderr
	ft_putchar_fd('\n', 2); // Prints: (newline) to stderr
	return(0);
}*/