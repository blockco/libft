/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 18:21:22 by lhurt             #+#    #+#             */
/*   Updated: 2016/09/26 18:21:23 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned i;
	unsigned start;
	unsigned end;
	char *new;

	i = 0;
	while (s[i] <= ' ')
		i++;
	start = i;
	i = ft_strlen(s) - 1;
	while (s[i] <= ' ')
		i--;
	end = i;
	new = ft_strnew(end - start);
	i = 0;
	while (start <= end)
	{
		new[i] = s[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
