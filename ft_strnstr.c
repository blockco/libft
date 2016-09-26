/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 21:11:00 by lhurt             #+#    #+#             */
/*   Updated: 2016/09/25 21:11:02 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*bigcp;
	char	*littlecp;
	unsigned		i;

	i = 0;
	bigcp = (char *) big;
	littlecp = (char *) little;
	while (bigcp[0])
	{
		while(bigcp[0] == littlecp[0])
		{
			littlecp += 1;
			bigcp += 1;
		}
		if ((i == len - 1) || (ft_strlen(little) > len))
			return (NULL);
		if(littlecp[0] == '\0')
		{
			return ((char *)(big += i));
		}
		bigcp += 1;
		littlecp = (char *) little;
		i++;
	}
	return (NULL);
}
