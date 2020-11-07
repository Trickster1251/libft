#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char* str);
int ft_isdigit(int num);
int ft_isalpha(int num);
int ft_isalnum(int num);
int ft_isascii(int num);
int ft_tolower(int num);
int ft_toupper(int num);
//int ft_atoi(char* str);
//void* ft_memcpy(void* dst, const void* src, size_t n);
// int strncmp( const char * string1, const char * string2, size_t num );

int main()
{
	printf("%d %d %d\n",ft_strlen("Hello world"), ft_isdigit(1), ft_isalpha('a'));
	printf("ft_isalnum:  %d %d %d\n", ft_isalnum('a'), ft_isalnum('9'), ft_isalnum('+'));
	printf("ft_isascii: %d %d %d %d\n", ft_isascii('a'), ft_isascii(1),ft_isascii(126),ft_isascii('9'));
	printf("ft_tolower: %c %c %c %c\n", ft_tolower('a'), ft_tolower('A'),ft_tolower(126),ft_tolower('Z'));
	printf("ft_toupper: %c %c %c %c\n", ft_toupper('a'), ft_toupper('A'),ft_toupper(126),ft_toupper('Z'));
//	printf("atoi: %d %d %d",atoi("1234asdfasd123"), atoi("+234234"), atoi("    222222"));
//	printf("ft_atoi: %d %d %d",ft_atoi("1234asdfasd123"), ft_atoi("+234234"), ft_atoi("    222222"));
//	printf("ft_bzero: %d %d %d",ft_bzero("1234asdfasd123", 3), ft_bzero("+234234", 2), ft_bzero("    222222", 6));
//	printf("ft_bzero: %d %d %d",bzero("1234asdfasd123", 3), bzero("+234234", 2), bzero("    222222", 6));
	return 0;
}
