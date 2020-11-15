/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walethea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 17:27:59 by walethea          #+#    #+#             */
/*   Updated: 2020/11/11 19:20:44 by walethea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *src, const char *find_str, size_t len)
{
	size_t i;
	size_t pos;

	pos = 0;
	if (!*find_str)
		return ((char*)src);
	while (src[pos] && len--)
	{		
		if (src[pos] == find_str[0])
		{
			i = 0;
			while (src[pos + i] == find_str[i] && (pos + i) <= len)
				i++;
			if (find_str[i] == '\0')
				return ((char*)&src[pos]);
		}
		pos++;
	}
	return (0);
}
