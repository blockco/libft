/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:40:20 by rpassafa          #+#    #+#             */
/*   Updated: 2016/09/22 15:40:31 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}
// int main()
// {
// 	char a = '1';
// 	char b = '0';
// 	char c = '9';
// 	char d = 'a';
// 	char e = 'b';
// 	char f = 'c';

// 	printf("%d\n",ft_isdigit(a));
// 	printf("%d\n",ft_isdigit(b));
// 	printf("%d\n",ft_isdigit(c));
// 	printf("%d\n",ft_isdigit(d));
// 	printf("%d\n",ft_isdigit(e));
// 	printf("%d\n",ft_isdigit(f));

// 	printf("%s\n", "------------------------------");

// 	printf("%d\n",isdigit(a));
// 	printf("%d\n",isdigit(b));
// 	printf("%d\n",isdigit(c));
// 	printf("%d\n",isdigit(d));
// 	printf("%d\n",isdigit(e));
// 	printf("%d\n",isdigit(f));

// 	return 0;
// }
