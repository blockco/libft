/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:54:15 by rpassafa          #+#    #+#             */
/*   Updated: 2016/09/22 15:54:17 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
	if(c >= 'A' && c <= 'Z')
		return 1;
	else if(c >= 'a' && c <= 'z')
		return 1;
	else if(c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}
int main()
{
	char a = '$';
	char b = 'g';
	char c = 'f';
	char d = 'a';
	char e = 'z';
	char f = '7';

	printf("%d\n",ft_isalnum(a));
	printf("%d\n",ft_isalnum(b));
	printf("%d\n",ft_isalnum(c));
	printf("%d\n",ft_isalnum(d));
	printf("%d\n",ft_isalnum(e));
	printf("%d\n",ft_isalnum(f));

	printf("%s\n", "------------------------------");

	printf("%d\n",isalnum(a));
	printf("%d\n",isalnum(b));
	printf("%d\n",isalnum(c));
	printf("%d\n",isalnum(d));
	printf("%d\n",isalnum(e));
	printf("%d\n",isalnum(f));

	return 0;
}
