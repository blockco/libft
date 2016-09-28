/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 16:46:27 by chansen           #+#    #+#             */
/*   Updated: 2016/09/22 16:46:28 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		nbr;
	int		neg;

	i = 0;
	nbr = 0;
	neg = 1;
	while (str[i] <= ' ' || str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	if (str[i] == '+' || str[i] <= ' ')
		return (nbr);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (nbr *= neg);
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr *= neg);
}

int		main()
{
	char	*a;
	char	*b;
	char	*c;

	a = "   + 1  ";
	b = "11354223";
	c = "   - 1   ";
	
	printf("%d\n", ft_atoi(a));
	printf("%d\n", ft_atoi(b));
	printf("%d\n", ft_atoi(c));
	printf("%s\n", "---------------");
	printf("%d\n", atoi(a));
	printf("%d\n", atoi(b));
	printf("%d\n", atoi(c));
	//printf("%s\n", "---------------");
	//printf("%d\n", ft_atoi2(a));
	//printf("%d\n", ft_atoi2(b));
	//printf("%d\n", ft_atoi2(c));
}
