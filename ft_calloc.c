/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervera <jcervera@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:45:39 by jcervera          #+#    #+#             */
/*   Updated: 2026/10/07 19:01:58 by jcervera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	space;
	void	*result;

	if (size == 0 || nmemb == 0)
		return (malloc(1));
	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	space = nmemb * size;
	result = malloc(space);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, space);
	return (result);
}
