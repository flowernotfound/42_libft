/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:53:20 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/27 06:53:39 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	if (!s || !find)
		return (NULL);
	if (find[0] == '\0')
		return ((char *)s);
	i = 0;
	while (s[i] && i < n)
	{
		j = 0;
		if (s[i] == find[j])
		{
			while (s[i + j] && find[j] && s[i + j] == find[j] && (i + j) < n)
				j++;
			if (find[j] == '\0')
				return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
