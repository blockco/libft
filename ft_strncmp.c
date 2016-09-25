#include <string.h>
#include <stdio.h>
#include "ft_lib.h"

int ft_strncmp(const char *s1, const char *s2, size_t length)
{
	unsigned	int		i;
	i = 0;
	while((s1[i] == s2[i]) && (i <= length))
	{
		
		if (s1[i] == '\0' && s2[i] == '\0')
			return (s1[i-1] - s2[i-1]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{

	printf("%d\n",ft_strncmp("dank", "bye",2));
	printf("%d\n",ft_strncmp("bye", "hello",6));
	printf("%d\n",ft_strncmp("hello", "hello",1));
	printf("%d\n",ft_strncmp("rick", "rick",5));
	printf("%d\n",ft_strncmp("rick", "rick",-1));

	printf("%s\n","--------------------------");
	
	printf("%d\n",strncmp("dank", "bye",2));
	printf("%d\n",strncmp("bye", "hello",6));
	printf("%d\n",strncmp("hello", "hello",1));
	printf("%d\n",strncmp("rick", "rick",5));
	printf("%d\n",strncmp("rick", "rick",-1));
	return 0;
}
