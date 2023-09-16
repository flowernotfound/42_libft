#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	s = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (buf);
}
