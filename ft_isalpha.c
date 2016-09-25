/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:48:22 by rpassafa          #+#    #+#             */
/*   Updated: 2016/09/22 15:48:24 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
	if(c >= 'A' && c <= 'Z')
		return 1;
	else if(c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
int main()
{
	char a = '1';
	char b = 'g';
	char c = 'A';
	char d = 'a';
	char e = 'z';
	char f = 'Z';

	printf("%d\n",ft_isalpha(a));
	printf("%d\n",ft_isalpha(b));
	printf("%d\n",ft_isalpha(c));
	printf("%d\n",ft_isalpha(d));
	printf("%d\n",ft_isalpha(e));
	printf("%d\n",ft_isalpha(f));

	printf("%s\n", "------------------------------");

	printf("%d\n",isalpha(a));
	printf("%d\n",isalpha(b));
	printf("%d\n",isalpha(c));
	printf("%d\n",isalpha(d));
	printf("%d\n",isalpha(e));
	printf("%d\n",isalpha(f));

	return 0;
}
