/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 05:03:27 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/26 16:28:35 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

int	ft_atoi(const char *s)
{
	long	n;
	long	div;
	int		i;
	int		sign;
	int		mod;

	div = LONG_MAX / 10;
	mod = LONG_MAX % 10;
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
	n = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (n > div || (n == div && (s[i] - '0') > mod))
		{
			if (sign == 1)
				return ((int)LONG_MAX);
			else
				return ((int)LONG_MIN);
		}
		n = n * 10 + (s[i] - '0');
		i++;
	}
	return ((int)(n * sign));
}

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	printf("%d\n", atoi("2147483647"));
	printf("%d\n", atoi("2147483648"));
	printf("%d\n", atoi("-2147483649"));

	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi("2147483648"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("-2147483649"));

}
