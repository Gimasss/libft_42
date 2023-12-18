//per NON farlo esplodere: 

#ifndef LIBFT_H
# define LIBFT_H
//librerie
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <string.h>

//box per prototipi

//basic
/**
 * @brief alfanumerico
 * @param c char
 * @return true or false
 * @bug none
 */
int		ft_isalnum(int c);
/**
 * @brief Alfabeto
 * @param c 
 * @return 
 */
int		ft_isalpha(int c);
/**
 * @
*/
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
/**
 * @brief conversione a int
 * @param str 
 * @bug min int = 0
 * @return result*sign
 */

//		memory 

int		ft_memcmp(const void *s1, const void *s2, size_t n);
/**
 * @brief set memory - specific char
 * @details used in bzero
*/
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

//		strings

int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strlcpy(char *dst, const char *src, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
/**
 * @details recalls memmove funct
*/
char	*ft_itoa(int nbr);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *s);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));

//		printing

void	ft_putchar_fd(const char s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif