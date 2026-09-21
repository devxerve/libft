/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcervera <jcervera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:45:16 by jcervera          #+#    #+#             */
/*   Updated: 2026/09/21 10:51:22 by jcervera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	i;
	unsigned int	src_length;

	src_length = 0;
	dest_length = 0;
	while (dest[dest_length] != '\0' && dest_length < size)
		dest_length++;
	while (src[src_length] != '\0')
		src_length++;
	if (dest_length >= size)
		return (size + src_length);
	i = 0;
	while ((i + dest_length < size - 1) && src[i] != '\0')
	{
		dest[i + dest_length] = src[i];
		i++;
	}
	dest[i + dest_length] = '\0';
	return (dest_length + src_length);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}