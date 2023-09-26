/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 21:31:12 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/26 22:55:16 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	length;

	length = ft_strlen(str);
	if ((unsigned char)c == '\0')
		return ((char *)(str + length));
	while (length >= 0)
	{
		if (str[length] == (unsigned char)c)
			return ((char *)(str + length));
		length--;
	}
	return (NULL);
}
