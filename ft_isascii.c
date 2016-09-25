/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:33:35 by rpassafa          #+#    #+#             */
/*   Updated: 2016/09/22 13:33:36 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
	if(c > 0 && c < 128)
		return 1;
	else
		return 0;
}
int main()
{
	int a = 64;
	int b = -1;
	int c = 150;
	int d = 0;
	int ha = 0x57;
	int hb = 0x5a;

	printf("%c\n",ft_isascii(a));
	printf("%c\n",ft_isascii(b));
	printf("%c\n",ft_isascii(c));
	printf("%c\n",ft_isascii(d));
	printf("%c\n",ft_isascii(ha));
	printf("%c\n",ft_isascii(hb));
	printf("%c\n",ft_isascii(a));
	printf("%c\n",ft_isascii(b));
	printf("%c\n",ft_isascii(c));
	printf("%c\n",ft_isascii(d));
	printf("%d\n",ft_isascii(ha));
	printf("%d\n",ft_isascii(hb));

	printf("%s\n", "------------------------------");

	printf("%c\n",isascii(a));
	printf("%c\n",isascii(b));
	printf("%c\n",isascii(c));
	printf("%c\n",isascii(d));
	printf("%c\n",isascii(ha));
	printf("%c\n",isascii(hb));
	printf("%c\n",isascii(a));
	printf("%c\n",isascii(b));
	printf("%c\n",isascii(c));
	printf("%c\n",isascii(d));
	printf("%d\n",isascii(ha));
	printf("%d\n",isascii(hb));

	return 0;
}