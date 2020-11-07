#ifndef	LIBFT_H
#define LIBFT_H

#include <string.h>

void	ft_bzero(void *s, size_t n);
int ft_isalnum(int chr);
int ft_isalpha(int chr);
int ft_isascii(int chr);
int ft_isdigit(int num);
void *ft_memccpy (void *dst, const void *src, int c, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str, const void *str1, size_t n);
void*  ft_memcpy(void* dst, const void* src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlen(char* str);
int ft_tolower(int chr);
int ft_toupper(int chr);
int ft_isprint(int c);
#endif






