/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walethea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:07:46 by walethea          #+#    #+#             */
/*   Updated: 2020/11/05 16:08:01 by walethea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char* d;
	unsigned char* s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;

	if (s == NULL)
		return (NULL);

	if(d < s)
	{
		while(*s && len--)
			*d++ = *s++;
		*d = '\0';

	}
	else if (d > s)
	{
		while(len--)
			*d-- = *s--;
	}
	return (dst);
}

