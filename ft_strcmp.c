/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 16:12:02 by rpassafa          #+#    #+#             */
/*   Updated: 2016/09/22 16:12:04 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include "ft_lib.h"

int ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while(s1[i] == s2[i])
	{
		i++;
		if (s1[i] == '\0' && s2[i] == '\0')
			return (s1[i-1] - s2[i-1]);
	}
	return (-1);
}

int main()
{

	printf("%d\n",ft_strcmp("dank", "bye"));
	printf("%d\n",ft_strcmp("bye", "hello"));
	printf("%d\n",ft_strcmp("hello", "hello"));
	printf("%d\n",ft_strcmp("rick", "rick"));

	printf("%s\n","--------------------------");

	printf("%d\n",ft_strcmp("dank", "bye"));
	printf("%d\n",ft_strcmp("bye", "hello"));
	printf("%d\n",ft_strcmp("hello", "hello"));
	printf("%d\n",ft_strcmp("rick", "rick"));
	return 0;
}
