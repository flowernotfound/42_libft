/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:10:04 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/29 12:29:36 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	i;

	dest_length = 0;
	while (dest != NULL && dest[dest_length])
		dest_length++;
	src_length = 0;
	while (src != NULL && src[src_length])
		src_length++;
	if (n <= dest_length)
		return (n + src_length);
	i = 0;
	while (src[i] && dest_length + i < n - 1)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}
