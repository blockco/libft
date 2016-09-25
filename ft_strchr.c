#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *ft_strchr(const char *string, int character)
{
	int i;
	i = 0;
	while(string[i])
	{
		if (string[0] == character)
			return ((char *)string);
		else
			string += 1;
	}
	return (NULL);
}

int main(void)
{
	printf("%s\n",ft_strchr("familyisgood", 'h'));
	printf("%s\n",ft_strchr("shitslit", 's'));
	printf("%s\n",ft_strchr("familyisgood", 's'));
	printf("%s\n",ft_strchr("familyisgood", 'f'));
	printf("%s\n",ft_strchr("familyisgood", 'f'));
	printf("%s\n",ft_strchr("familyisgood", 'g'));

	printf("%s\n","---------------------------");

	printf("%s\n",strchr("familyisgood", 'h'));
	printf("%s\n",strchr("shitslit", 's'));
	printf("%s\n",strchr("familyisgood", 's'));
	printf("%s\n",strchr("familyisgood", 'f'));
	printf("%s\n",strchr("familyisgood", 'f'));
	printf("%s\n",strchr("familyisgood", 'g'));
}