/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:03:58 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/29 11:53:58 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	length;
	size_t	i;
	char	*p;

	length = ft_strlen(s);
	p = (char *)malloc(sizeof(char) * (length + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		p[i] = s[i];
		i++;
	}
	p[length] = '\0';
	return (p);
}
