#include "ft_lib.h"
#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, const char *src, size_t maxLength)
						//destinationg  //takes from here n bytes addsm to dest
{
	int start;
	int i;
	char *temp;

	i = 0;
	temp = malloc(sizeof(dest));
	ft_strcpy(temp,dest);
	dest = malloc(ft_strlen(dest) + ft_strlen(src));
	ft_strcpy(dest,temp);
	start = ft_strlen(dest);
	while(src[i])
	{
		dest[start] = src[i];
		start++;
		i++;
		if ((unsigned)i == maxLength)
			break;
	}
	dest[start] = '\0';
	return(dest);
}

int main()
{
	printf("%s\n",ft_strncat("hi","bye",1));
	printf("%s\n",ft_strncat(" "," ",2));
	printf("%s\n",ft_strncat("yess","noo",-1));
	return 0;
}
