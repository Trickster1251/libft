#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		l;
	unsigned char	*sub_s;

	i = 0;
	l = 0;
//	while (s[start + l] != '\0')
//		l++;
//	if (l < len)
//		len = l;
	sub_s = (unsigned char*)malloc(sizeof(unsigned char*) * (len + 1));
	if (!*s || !sub_s)
		return (NULL);
	while (s[start + i] && len--)
	{
		sub_s[i] = s[start + i];
	       i++;	
	}
	sub_s[i] = '\0';
	return ((char*)&sub_s[0]);
}
