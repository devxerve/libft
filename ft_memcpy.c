/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervera <jcervera@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 18:22:41 by jcervera          #+#    #+#             */
/*   Updated: 2026/09/23 18:39:11 by jcervera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	int							i;
	unsigned char				*dest_ptr;
	unsigned char				*src_ptr;

	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
}
