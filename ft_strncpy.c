#include "ft_lib.h"

char *ft_strncpy(char *s1, char *s2, int max)
{
	int i;

	i = 0;
	while (i <= max)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return s1;
}
