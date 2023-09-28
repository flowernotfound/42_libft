/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:27:56 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/28 09:03:59 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	if (!s)
		return (0);
	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (*s != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		s++;
	}
	return (count);
}

static void	free_words(char **words, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(words[j]);
		j++;
	}
	free(words);
}

static int	put_words(char **words, char const *s, char c)
{
	int	i;
	int	start;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = 0;
			while (s[start] && s[start] != c)
				start++;
			words[i] = ft_substr(s, 0, start);
			if (!words[i])
			{
				free_words(words, i);
				return (0);
			}
			i++;
			s += start;
		}
		else
			s++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		counts;
	int		success;

	if (!s)
		return (NULL);
	counts = count_words(s, c);
	words = (char **)malloc(sizeof(char *) * (counts + 1));
	if (!words)
		return (NULL);
	success = put_words(words, s, c);
	if (!success)
		return (NULL);
	words[counts] = NULL;
	return (words);
}
