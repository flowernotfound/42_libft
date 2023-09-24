/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:47:48 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/25 02:44:24 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr / 10)
			ft_putnbr(-(nbr / 10));
		ft_putchar('0' - (nbr % 10));
	}
	else if (nbr >= 0)
	{
		if (nbr / 10)
			ft_putnbr(nbr / 10);
		ft_putchar('0' + (nbr % 10));
	}
}
