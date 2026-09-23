/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervera <jcervera@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:45:16 by jcervera          #+#    #+#             */
/*   Updated: 2026/09/23 15:02:31 by jcervera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

int				isalnum(int c);

int				isascii(int c);