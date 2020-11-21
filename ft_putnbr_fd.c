/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walethea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:59:44 by walethea          #+#    #+#             */
/*   Updated: 2020/11/20 21:12:16 by walethea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		mc;
	int		s;
	char	r[10];

	mc = n;
	s = 0;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		r[s] = n % 10 + '0';
		s++;
		n /= 10;
	}
	if (mc < 0)
		ft_putchar_fd('-', fd);
	while (s > 0)
	{
		s--;
		ft_putchar_fd(r[s], fd);
	}
}

// void	ft_putnumb_fd(int n, int fd)
// {
// 	if (n < 0)
// 		n *- 1;
// 	if (n == 0)
// 		ft_putchar_fd('0', 1);
// 	while (n >= 10)
// 	{
		
// 	}
// }