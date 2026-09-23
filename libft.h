/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervera <jcervera@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:45:16 by jcervera          #+#    #+#             */
/*   Updated: 2026/09/23 19:04:36 by jcervera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int				ft_strncmp(char *s1, char *s2, unsigned int n);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				ft_strlen(char *str);

int				ft_atoi(char *str);

char			*ft_strdup(char *src);

void			ft_putchar_fd(char c, int fd);

void			ft_putnbr_fd(int n, int fd);

void			ft_putstr_fd(char *s, int fd);

int				ft_isdigit(int c);

int				ft_isalpha(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

void			*ft_memset(void *s, int c, size_t n);

void			*ft_bzero(void *s, size_t n);

void			*memcpy(void *dest, const void *src, size_t n);

void			*memmove(void *dest, const void *src, size_t n);