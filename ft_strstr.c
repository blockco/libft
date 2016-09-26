/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 20:48:33 by lhurt             #+#    #+#             */
/*   Updated: 2016/09/25 20:48:41 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*bigcp;
	char	*littlecp;
	int		i;

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
