#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *ft_strrchr(const char *string, int character)
{
	int i;
	int f;
	const char *temp;

	temp = string;
	i = 0;
	f = -1;
	while(temp[i])
	{
		if (temp[i] == character)
			f = i;
		i++;
	}
	if (f == -1)
		return (NULL);
	i = 0;
	while(i < f)
	{
		temp += 1;
		i++;
	}
	return((char *)temp);
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