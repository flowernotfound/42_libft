/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:10:04 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/17 17:16:45 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned int	dest_length;
	unsigned int	src_length;

	dest_length = 0;
	while (dest[dest_length])
		dest_length++;
	src_length = 0;
	while (src[src_length])
		src_length++;
	

}
