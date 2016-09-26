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
	const char	*b = big;
	const char	*l = little;
	size_t		n = len;

	if (l == NULL)
		return ((char *) big);
	while (*big)
	{
		l = little;
		while (*l && (*l == *b))
		{
			//printf("%zu\t", n); printf("%s\n", big);;
			if (n == 0)
				return (NULL);
			l++;
			b++;
			n--;
		}
		if (!(*l))
			return ((char *) big);
		big++;
		b = big;
	}
	return (NULL);
}
