/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:10:45 by rpassafa          #+#    #+#             */
/*   Updated: 2016/09/22 17:10:47 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, const char *src)
{
	int start;
	int i;
	
	char *temp;
	temp = malloc(sizeof(dest));
	ft_strcpy(temp,dest);
	dest = malloc(ft_strlen(dest) + ft_strlen(src));
	ft_strcpy(dest,temp);
	i = 0;
	start = ft_strlen(dest);
	while(src[i])
	{
		dest[start] = src[i];
		start++;
		i++;
	}
	dest[start] = '\0';
	return(dest);
}

int main()
{
	printf("%s\n",ft_strcat("hi","bye"));
	printf("%s\n",ft_strcat(" "," "));
	printf("%s\n",ft_strcat("yess","noo"));

	printf("%s\n", "----------------");

	printf("%s\n",strcat("heei","bie"));
	printf("%s\n",strcat("dick","chick"));
	printf("%s\n",strcat("right","now"));
	return 0;
}
