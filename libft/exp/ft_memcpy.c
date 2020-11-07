#include<string.h>
#include<stdio.h>
#include<stdlib.h>

size_t ft_strlcpy (char *dst, const char *src, size_t size)
{
	unsigned char* d;
	unsigned char* s;
	size_t i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;

	while(size--)
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	return (size);
}

void *ft_strchr(const void *str, int c)
{
	unsigned char* s;
	int i;

	s = (unsigned char*)str;
	i =  -1;
	while(*s++)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;

	}
	return NULL;
}

int main()
{	



	char  buf[10];                      // буфер размером меньше строки

   const char *str = "образец строки";
   size_t sz;

   buf[9] = '\0';                   // избыточная инициализация для отладочной печати

   printf("строка: \"%s\"\n\n", str);
   printf("буфер перед копированием: \"%s\"\n", buf);

   sz = ft_strlcpy(buf, str, sizeof(buf));    
   if (sz >= sizeof(buf))      
      printf("обнаружено усечение строки с %zu до %lu символов !\n", sz, sizeof(buf)-1);

   printf("буфер после копирования:  %s", buf);;
}
