#include "libft.h"

void	*ft_memset(void *buf, int c, size_t n)
{
	size_t	i;
	unsigned char	*s;

	s = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (buf);
}
