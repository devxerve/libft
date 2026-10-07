/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervera <jcervera@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:20:24 by jcervera          #+#    #+#             */
/*   Updated: 2026/10/07 16:41:33 by jcervera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*src;
	size_t				i;

	i = 0;
	src = (unsigned char *)s;
	while (i < n)
		if (src[i] == c)
			return (&src[i]);
	return (NULL);
}
