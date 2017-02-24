/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basesize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 21:10:26 by rpassafa          #+#    #+#             */
/*   Updated: 2017/02/23 21:10:27 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		findsizebase(int value, int base)
{
	int size;

	size = 0;
	while (value)
	{
		size++;
		value = value / base;
	}
	return (size);
}
