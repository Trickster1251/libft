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

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	char* src = (char*) needle;
	char* dst = (char*) haystack;

	i = 0;
	j = 0;
	while(src[i] && len--)
	{		
		if (src[i] == dst[j])
		{
			
		}
	}
}
