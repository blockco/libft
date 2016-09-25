#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "ft_lib.h"

char *ft_strnstr(const char *s1, const char *s2, size_t max)
{
	char	*s1cp;
	char	*s2cp;
	int		i;
	int		t;

	t = max;
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
		if (i == t-1 || (ft_strlen(s2) > max))
			return NULL;
		if(s2cp[0] == '\0')
			return ((char *)(s1 += i));
		s1cp += 1;
		s2cp = (char *) s2;
		i++;
	}
	return (NULL);
}

int main(void)
{
	printf("%s\n",ft_strnstr("fam", "zaz",4));
	printf("%s\n",ft_strnstr("shitslit", "it",5));
	printf("%s\n",ft_strnstr("familyisgood", "fam",2));
	printf("%s\n",ft_strnstr("familyisgood", "go",3));
	printf("%s\n",ft_strnstr("familyisgood", "ily",3));
	printf("%s\n",ft_strnstr("familyisgood", "og	",5));

	printf("%s\n","---------------------------");

	printf("%s\n",strnstr("fam", "zaz",4));
	printf("%s\n",strnstr("shitslit", "it",5));
	printf("%s\n",strnstr("familyisgood", "fam",2));
	printf("%s\n",strnstr("familyisgood", "go",3));
	printf("%s\n",strnstr("familyisgood", "ily",3));
	printf("%s\n",strnstr("familyisgood", "og	",5));
}