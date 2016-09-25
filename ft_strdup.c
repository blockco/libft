#include <string.h>
#include <stdio.h>
#include "ft_lib.h"

char *ft_strdup(const char *srcString)
{
	int size;
	char *destString;

	if (srcString == NULL)
		return NULL;

	size = ft_strlen(srcString);
	destString = malloc(sizeof(char) * (size + 1));
	ft_strncpy(destString, srcString, size);
	return (destString);
}

int main()
{

	printf("%s\n",ft_strdup("dank"));
	printf("%s\n",ft_strdup("bye"));
	printf("%s\n",ft_strdup("hello"));
	printf("%s\n",ft_strdup("rick"));
	printf("%s\n",ft_strdup("rick"));

	printf("%s\n","--------------------------");
	
	printf("%s\n",strdup("dank"));
	printf("%s\n",strdup("bye"));
	printf("%s\n",strdup("hello"));
	printf("%s\n",strdup("rick"));
	printf("%s\n",strdup("rick"));
	return 0;
}
