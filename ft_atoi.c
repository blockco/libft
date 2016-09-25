
#include "ft_lib.h"
#include <stdio.h>
//#include <ctype.h>

int ft_atoi(char *c)
{
	int i;
	int sign;
	int ans;
	int first;

	i = 0;
	ans = 0;
	sign = 1;
	if (c[0] == '-')
	{
		sign = -1;
		first = 1;
		i = 1;
	}
	else if (ft_isdigit(c[0]))
		first = 0;
	while(ft_isdigit(c[i]))
	{
		if(first == i)
			ans = c[i] - 48;
		else
			ans = (ans * 10) + (c[i] - 48);
		i++;
	}
	return (ans * sign);
}

int main()
{
	char *a = "-123";
	char *b = "123";
	char *c = "5a6";
	char *d = "a10";
	char *e = "zfs";
	char *f = "750";

	printf("%d\n",ft_atoi(a));
	printf("%d\n",ft_atoi(b));
	printf("%d\n",ft_atoi(c));
	printf("%d\n",ft_atoi(d));
	printf("%d\n",ft_atoi(e));
	printf("%d\n",ft_atoi(f));

	printf("%s\n", "------------------------------");

	printf("%d\n",atoi(a));
	printf("%d\n",atoi(b));
	printf("%d\n",atoi(c));
	printf("%d\n",atoi(d));
	printf("%d\n",atoi(e));
	printf("%d\n",atoi(f));

	return 0;
}
