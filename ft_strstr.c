#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "ft_lib.h"

char *ft_strstr(const char *s1, const char *s2)
{
	char	*s1cp;
	char	*s2cp;
	int		i;

	i = 0;
	s1cp = (char *) s1;
	s2cp = (char *) s2;
	while (s1cp[0])
	{
		while(s1cp[0] == s2cp[0])
		{
			s2cp += 1;
			s1cp += 1;
		}
		if(s2cp[0] == '\0')
		{
			return ((char *)(s1 += i));
		}
		s1cp += 1;
		s2cp = (char *) s2;
		i++;
	}
	return (NULL);
}

int main(void)
{

	printf("%s\n",ft_strstr("familyisgood", "zaz"));
	printf("%s\n",ft_strstr("shitslit", "it"));
	printf("%s\n",ft_strstr("familyisgood", "fam"));
	printf("%s\n",ft_strstr("familyisgood", "go"));
	printf("%s\n",ft_strstr("familyisgood", "ily"));
	printf("%s\n",ft_strstr("familyisgood", "og	"));

	printf("%s\n","---------------------------");

	printf("%s\n",strstr("familyisgood", "zaz"));
	printf("%s\n",strstr("shitslit", "it"));
	printf("%s\n",strstr("familyisgood", "fam"));
	printf("%s\n",strstr("familyisgood", "go"));
	printf("%s\n",strstr("familyisgood", "ily"));
	printf("%s\n",strstr("familyisgood", "og	"));
}