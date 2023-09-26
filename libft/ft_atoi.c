/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 05:03:27 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/26 19:28:06 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

long	check_overflow(int sign)
{
	if (sign == 1)
		return (LONG_MAX);
	else
		return (LONG_MIN);
}

long	convert(const char *s, int *i, int sign)
{
	long	n;
	long	div;
	int		mod;

	div = LONG_MAX / 10;
	mod = LONG_MAX % 10;
	n = 0;
	while (s[*i] >= '0' && s[*i] <= '9')
	{
		if (n > div || (n == div && (s[*i] - '0') > mod))
			return (check_overflow(sign));
		n = n * 10 + (s[*i] - '0');
		(*i)++;
	}
	return (n);
}

int	ft_atoi(const char *s)
{
	int		i;
	int		sign;

	i = 0;
	while (is_space(s[i]))
		i++;
	sign = 1;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	return ((int)(convert(s, &i, sign) * sign));
}
