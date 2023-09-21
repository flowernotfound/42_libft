/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:23:14 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/21 16:14:13 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *buf, int c, size_t n)
{
	const unsigned char	*s;
	size_t				i;

	s = (const unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		if (*(s + i) == c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
