#include "libft.h"

char *ft_strncpy(char const *dst, char *src, size_t max)
{
	size_t	i;
	size_t	temp;
	char *d;

	temp = max;
	d = (char*)dst;
	i = 0;

	while (i < temp && src[i])
	{
		d[i] = src[i];
		i++;
	}
	if (max != 0)
		while(i < max)
		{
			d[i] = '\0';
			i++;
		}
	return (d);
}
