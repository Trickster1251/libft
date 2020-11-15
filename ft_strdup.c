#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char		*str;
	char		*srcs;

	i = 0;
	len = 0;
	srcs = (char*)src;
	while (srcs[len])
		len++;
	str = (char*)malloc(sizeof(char*) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (srcs && (i <= len))
	{
		str[i] = srcs[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
