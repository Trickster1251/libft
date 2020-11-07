/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walethea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:06:49 by walethea          #+#    #+#             */
/*   Updated: 2020/11/07 17:03:11 by walethea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy (void *dst, const void *src, int c, size_t n)
{
	char* d;
	const char* s;
	size_t i;

	d = (char*)dst;
	s = (char*)src;
	i = 0;

	while(i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return ((char*)dst);
		i++;
	}
	return ((char*)dst);
}
