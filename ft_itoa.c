/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 20:37:58 by rpassafa          #+#    #+#             */
/*   Updated: 2017/02/23 21:16:22 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		size;
	int		neg;
	long	temp;

	neg = 0;
	temp = (long)n;
	if (n <= 0)
		neg = 1;
	if (neg)
		temp *= -1;
	size = get_size(n) + neg;
	if (!(res = ft_strnew(size)))
		return (NULL);
	size--;
	if (temp == 0)
		res[0] = '0';
	while (temp != 0)
	{
		res[size--] = (temp % 10) + '0';
		temp /= 10;
	}
	if (neg && res[0] != '0')
		res[0] = '-';
	return (res);
}
