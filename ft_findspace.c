/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findspace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 20:37:20 by rpassafa          #+#    #+#             */
/*   Updated: 2017/02/23 20:37:23 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		findspace(char *s)
{
	int	i;

	i = 0;
	while (s[i] <= ' ' && s[i])
		i++;
	return (i);
}
