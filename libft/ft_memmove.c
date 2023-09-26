/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 04:27:25 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/26 09:54:56 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p1;
	const unsigned char	*p2;

	if (dest == src || n == 0)
		return (dest);
	p1 = (unsigned char *)dest;
	p2 = (const unsigned char *)src;
	if (p1 > p2)
	{
		i = n;
		while (i--)
			p1[i] = p2[i];
	}
	else
	{
		i = 0;
		while (n--)
			p1[n] = p2[n];
	}
	return (dest);
}
