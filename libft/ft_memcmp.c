/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walethea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:05:14 by walethea          #+#    #+#             */
/*   Updated: 2020/11/07 17:36:00 by walethea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str, const void *str1, size_t n)
{
	unsigned char* s;
	unsigned char* s1;

	s = (unsigned char*)str;
	s1 = (unsigned char*)str1;
	int sum;
   	int sum1;

	sum = 0;
	sum1 = 0;
	// if ((s  == NULL) || (s1 == NULL))
	// 	return (NULL);
	while(n--)
	{
		sum += *s++;
		sum1 += *s1++;
	}
	if (sum > sum1)
		return (1);
	else if (sum < sum1)
		return (-1);
	else
		return (0);
}
