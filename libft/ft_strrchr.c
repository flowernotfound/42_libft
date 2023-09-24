/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 21:31:12 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/23 09:03:55 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	length;

	length = ft_strlen((char *)str);
	if (c == '\0')
		return ((char *)(str + length));
	while (length >= 0)
	{
		if (str[length] == c)
			return ((char *)(str + length));
		length--;
	}
	return (NULL);
}
