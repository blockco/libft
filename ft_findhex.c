/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 20:36:39 by rpassafa          #+#    #+#             */
/*   Updated: 2017/02/23 20:36:41 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	findhex(long n, int base)
{
	char *hex;

	hex = "0123456789ABCDEF";
	return (hex[n % base]);
}