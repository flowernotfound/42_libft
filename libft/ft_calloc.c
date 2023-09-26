/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 05:46:07 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/26 21:41:12 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	size_t	total;
	void	*p;

	if (count && SIZE_MAX / count < n)
		return (NULL);
	total = count * n;
	p = malloc(total);
	if (p == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_bzero(p, total);
	return (p);
}
