/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmitsuyo <yourLogin@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 04:27:25 by hmitsuyo          #+#    #+#             */
/*   Updated: 2023/09/17 04:27:32 by hmitsuyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p1;
	const unsigned char	*p2;

	p1 = (unsigned char *)dest;
	p2 = (const unsigned char *)src;
	if (dest <= src || dest >= src + n)
	{
		return (ft_memcpy(dest, src, n));
	}
	else
	{
		p1 += n;
		p2 += n;
		i = n;
		while (i > 0)
		{
			p1[i - 1] = p2[i - 1];
			i--;
		}
	}
	return (dest);
}
//void print_memory(char *msg, char *array, size_t n) {
//    printf("%s: ", msg);
//    for (size_t i = 0; i < n; ++i) {
//        printf("%c", array[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    char test1[10] = "abcde";
//    char test2[10] = "abcde";
//    char test3[20] = "abcde";
//    char test4[20] = "abcde";
//
//    print_memory("Before Test 1", test1, 5);
//    ft_memmove(test1 + 3, test1, 2);
//    print_memory("After Test 1", test1, 5);
//
//    print_memory("Before Test 2", test2, 5);
//    ft_memmove(test2, test2 + 2, 3);
//    print_memory("After Test 2", test2, 5);
//
//    print_memory("Before Test 3", test3, 5);
//    ft_memmove(test3 + 5, test3, 5);
//    print_memory("After Test 3", test3, 10);
//
//    print_memory("Before Test 4", test4, 5);
//    ft_memmove(test4, test4 + 5, 5);
//    print_memory("After Test 4", test4, 10);
//
//    return 0;
//}
