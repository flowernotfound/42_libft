/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:51:16 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/28 09:03:02 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_digits(int n)
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

static void	put_num(char *s, int n, int digits, int is_negative)
{
	if (n == INT_MIN)
	{
		s[digits - 1] = '8';
		n /= 10;
		digits--;
	}
	if (is_negative)
		n = -n;
	while (digits > 0)
	{
		digits--;
		s[digits] = (n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
		s[0] = '-';
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
		s[0] = '0';
	else
		put_num(s, n, digits, is_negative);
	return (s);
}
