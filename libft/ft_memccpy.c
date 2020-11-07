/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walethea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:06:49 by walethea          #+#    #+#             */
/*   Updated: 2020/11/07 18:53:09 by walethea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy (void *dst, const void *src, int c, size_t n)
{
	unsigned char* d;
	const char* s;
	size_t i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;

	while(n--)
	{
		if (s[i] == c)
			return (dst);
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return NULL;
}
