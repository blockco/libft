#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char*)&s[i]);
		i++;
	}
	return (NULL);
}


int main(void)
{
	printf("%s\n",ft_strrchr("familyisgood", 'h'));
	printf("%s\n",ft_strrchr("shitslit", 'l'));
	printf("%s\n",ft_strrchr("familyisgood", 's'));
	printf("%s\n",ft_strrchr("familyisgood", 'f'));
	printf("%s\n",ft_strrchr("familyisgood", 'f'));
	printf("%s\n",ft_strrchr("familyisgood", 'g'));

	printf("%s\n","---------------------------");

	printf("%s\n",strrchr("familyisgood", 'h'));
	printf("%s\n",strrchr("shitslit", 'l'));
	printf("%s\n",strrchr("familyisgood", 's'));
	printf("%s\n",strrchr("familyisgood", 'f'));
	printf("%s\n",strrchr("familyisgood", 'f'));
	printf("%s\n",strrchr("familyisgood", 'g'));
}
