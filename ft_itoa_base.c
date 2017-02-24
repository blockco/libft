/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 20:37:47 by rpassafa          #+#    #+#             */
/*   Updated: 2017/02/23 20:37:48 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int value, int base)
{
	long	n;
	int		size;
	char	*ret;

	n = value;
	if (value == 0)
		return ("0");
	if (value < 0)
		n = -1 * n;
	size = findsizebase(n, base);
	if (value < 0 && base == 10)
		size++;
	ret = (char*)malloc(size + 1);
	ret[size] = '\0';
	size--;
	while (n)
	{
		ret[size] = findhex(n, base);
		n = n / base;
		size--;
	}
	if (value < 0 && base == 10)
		ret[0] = '-';
	return (ret);
}
