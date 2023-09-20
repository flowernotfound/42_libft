/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 21:31:12 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/20 01:06:42 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strrchr(const char *str, int c)
{
	int	length;

	length = ft_strlen(str);

	if (c == '\0')
		return ((char *)str);
	while (length >= 0)
	{
	}
}
