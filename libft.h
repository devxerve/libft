/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervera <jcervera@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:45:16 by jcervera          #+#    #+#             */
/*   Updated: 2026/10/07 19:44:29 by jcervera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int				ft_strncmp(char *s1, char *s2, unsigned int n);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

size_t			ft_strlen(const char *str);

int				ft_atoi(const char *str);

char			*ft_strdup(char *src);

void			ft_putchar_fd(char c, int fd);

void			ft_putnbr_fd(int n, int fd);

void			ft_putstr_fd(char *s, int fd);

int				ft_isdigit(int c);

int				ft_isalpha(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

int				ft_toupper(int c);

int				ft_tolower(int c);

void			*ft_memset(void *s, int c, size_t n);

void			ft_bzero(void *s, size_t n);

void			*ft_memcpy(void *dest, const void *src, size_t n);

void			*ft_memmove(void *dest, const void *src, size_t n);

void			*ft_memchr(const void *s, int c, size_t n);

size_t			ft_strlcpy(char *dst, const char *src, size_t size);

char			*ft_strchr(const char *s, int c);

char			*ft_strrchr(const char *s, int c);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

char			*ft_strnstr(const char *big, const char *little, size_t len);

void			*ft_calloc(size_t nmemb, size_t size);

char			*ft_substr(char const *s, unsigned int start, size_t len);