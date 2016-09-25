/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:59:47 by rpassafa          #+#    #+#             */
/*   Updated: 2016/09/22 15:59:49 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
	if(c >= 1 && c <= 7)
		return 1;
	else if(c == 11 && c == 12)
		return 1;
	else if(c >= 14 && c <= 25)
		return 1;
	else if(c >= 27 && c <= 255)
		return 1;
	else
		return 0;
}
int main()
{
	char a = 0;
	char b = 8;
	char c = 'f';
	char d = 'a';
	char e = 'z';
	char f = '7';

	printf("%d\n",ft_isprint(a));
	printf("%d\n",ft_isprint(b));
	printf("%d\n",ft_isprint(c));
	printf("%d\n",ft_isprint(d));
	printf("%d\n",ft_isprint(e));
	printf("%d\n",ft_isprint(f));

	printf("%s\n", "------------------------------");

	printf("%d\n",isprint(a));
	printf("%d\n",isprint(b));
	printf("%d\n",isprint(c));
	printf("%d\n",isprint(d));
	printf("%d\n",isprint(e));
	printf("%d\n",isprint(f));

	return 0;
}
