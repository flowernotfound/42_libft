/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:51:16 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/25 00:37:53 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	number_digits(int n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		digits++;
	while (n != 0)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		digits;
	int		is_negative;

	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	digits = number_digits(n);
	s = (char *)malloc((sizeof(char)) * (digits + 1));
	if (!s)
		return (NULL);
	s[digits] = '\0';
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	if (n == INT_MIN)
	{
		ft_strlcpy(s, "-2147483648", 12);
		return (s);
	}
	while (n)
	{
		digits--;
		s[digits] = (n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
		s[0] = '-';
	return (s);
}
