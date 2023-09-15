#include "libft.h"

int	ft_strlen(char *s)
{
	int	length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}
