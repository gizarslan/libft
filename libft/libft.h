#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(const char *str);
void	ft_bzero(void *dest, size_t n);
void	*ft_calloc(size_t num, size_t size);
int ft_isalnum(int c);
int	ft_isalpha (int c);
int ft_isascii(int c);
int	ft_isdigit(int c);
int ft_isprint(int c);
void	*ft_memchr(const void *ptr, int c, size_t n);
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *dest, int c, size_t n);
char *ft_strchr(const char *str, int c);
char	*ft_strdup(const char *src);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t ft_strlen(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char* ft_strrchr(const char *str, int c);
int ft_tolower(int c);
int ft_toupper(int c);


#endif
