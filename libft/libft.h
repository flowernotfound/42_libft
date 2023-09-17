/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:18:00 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/17 17:22:57 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *s);
void	*ft_memset(void *dest, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);

#endif