/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walethea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 02:49:50 by walethea          #+#    #+#             */
/*   Updated: 2020/11/14 02:50:43 by walethea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	LIBFT_H
# define	LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
int		ft_atoi(char* str);
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
size_t ft_strlcpy (char *dst, const char *src, size_t size);
char * ft_strchr( const char * string, int symbol);
char * ft_strrchr( const char * string, int symbol);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlcat (char *dst, const char *src, size_t size);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void *ft_calloc(size_t count, size_t size);
void ft_putnbr_fd(int n, int fd);
char	*ft_strdup(const char *src);
char *ft_substr(char const *s, unsigned int start, size_t len);
#endif