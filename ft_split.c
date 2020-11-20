/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walethea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:18:34 by walethea          #+#    #+#             */
/*   Updated: 2020/11/20 20:38:54 by walethea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_word(char *str, char sym)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == sym && !(str[i + 1] == sym && !(str[i - 1] == sym)))
			count++;
		i++;
	}
	return (count);
}

char	**free_all(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	*malloc_word(const char *src, char sym)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (src[len] != sym && src[len] != '\0')
		len++;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (src && (i < len))
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split_new(char const *s, char c, char **words)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(words[j] = malloc_word(s, c)))
				return (free_all(words));
			j++;
			while (*s && *s != c)
				s++;
		}
	}
	words[j] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		col_words;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	col_words = count_word((char*)s, c);
	if (!(words = (char**)malloc((sizeof(char*) * col_words) + 1)))
		return (NULL);
	return (ft_split_new(s, c, words));
}
