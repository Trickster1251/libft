#include <stdio.h>
#include <string.h>

char*	ft_strcpy(char* dst, const char* src)
{
	int i = 0;

	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return dst;
}

char*	ft_strncpy(char* dest, const char* src, size_t n)
{
	if ((dest == NULL) &&(src == NULL))
    		return NULL;
	char* dst = dest;
    	while (*src && n--)
        	*dest++ = *src++;
    	*dest = '\0';	
    return dst;
}

int main()
{
char str[] = "Hello World";
char dst[100];

printf("%s\n", ft_strcpy(dst, str));
printf("%s", ft_strncpy(dst, str, 4));
}
